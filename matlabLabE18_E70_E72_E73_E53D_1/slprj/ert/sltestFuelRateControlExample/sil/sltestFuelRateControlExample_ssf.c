/*
 * sltestFuelRateControlExample_ssf.c
 *
 * Automatically generated s-function with I/O interface for:
 * Component: sltestFuelRateControlExample
 * Component Simulink Path: sltestFuelRateControlExample
 * Simulation Mode: SIL
 *
 */

#define S_FUNCTION_NAME                sltestFuelRateControlExample_ssf
#define S_FUNCTION_LEVEL               2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif

#include <stdio.h>
#include <string.h>
#include "simstruc.h"
#include "simtarget/slMdlrefSimTargetHeaders.h"
#include "fixedpoint.h"
#include "coder/connectivity_core/xilutils/xilutils.h"
#include "coder/connectivity/xilutils_sl/xilutils_sl.h"
#include "rtiostream_utils.h"
#include "coder/connectivity/xilcomms_rtiostream/xilcomms_rtiostream.h"
#include "coder/connectivity/XILHostAppSvc/XILHostAppSvc_CInterface.h"
#include "coder/connectivity/CoderAssumpHostAppSvc/CoderAssumpHostAppSvc_CInterface.h"

static real_T rtInf;
static real_T rtMinusInf;

/* Response case labels */
enum ResponseIDs {
  RESPONSE_ERROR = 0,
  RESPONSE_OUTPUT_DATA = 1,
  RESPONSE_PRINTF = 2,
  RESPONSE_FOPEN = 3,
  RESPONSE_FPRINTF = 4,
  RESPONSE_SIGNAL_RAISED = 5
};

typedef struct {
  FILE ** Fd;
  mwSize size;
  int32_T fidOffset;
} targetIOFd_T;

MdlRefChildMdlRec childModels[1] = {
  "sltestFuelRateControlExample", "sltestFuelRateControlExample", 0 };

static char * getSimulinkBlockPath(SimStruct *S)
{
  char * simulinkBlockPath = NULL;
  const char * origBlockPath = ssGetPath(S);
  const char * searchString = "TmpSFcnForModelReference_";
  char * searchPtr;
  size_t origLength, searchAndNameLength, copyAmount;
  char * secondPart;
  size_t nameLength;
  origLength = strlen(origBlockPath);
  searchPtr = strstr(origBlockPath, searchString);
  if (searchPtr == NULL) {
    return simulinkBlockPath;
  }

  searchAndNameLength = strlen(searchPtr);
  copyAmount = origLength - searchAndNameLength;
  simulinkBlockPath = (char *) mxCalloc((mwSize) (origLength + 1), sizeof(char));
  simulinkBlockPath = strncpy(simulinkBlockPath, origBlockPath, copyAmount);
  simulinkBlockPath[copyAmount] = '\0';
  nameLength = searchAndNameLength - strlen(searchString);
  secondPart = &simulinkBlockPath[copyAmount];
  secondPart = strncpy(secondPart, &origBlockPath[origLength - nameLength],
                       nameLength);
  secondPart[nameLength] = '\0';
  return simulinkBlockPath;
}

static void callStopHookAndFreeSFcnMemory(SimStruct *S);

/* grow the buffer for target I/O Fd array
 * targetIOFd->Fd is NULL on failure */
static void growTargetIOFd(SimStruct *S, targetIOFd_T * IOFd, mwSize
  requiredSize)
{
  if (IOFd->size < requiredSize) {
    IOFd->Fd = mxRealloc(IOFd->Fd, requiredSize * sizeof(FILE*));
    if (IOFd->Fd == NULL) {
      ssSetErrorStatus( S,"growTargetIOFd: mxRealloc failed.");
    } else {
      mexMakeMemoryPersistent(IOFd->Fd);
      IOFd->size = requiredSize;
    }                                  /* if */
  }                                    /* if */
}

static void closeAndFreeTargetIOFd(SimStruct *S)
{
  int i;
  if (ssGetPWork(S) != NULL) {
    targetIOFd_T * targetIOFdPtr = (targetIOFd_T *) ssGetPWorkValue(S, 3);
    if (targetIOFdPtr != NULL) {
      if (targetIOFdPtr->Fd != NULL) {
        for (i=0; i<targetIOFdPtr->size; i++) {
          if (targetIOFdPtr->Fd[i] != NULL) {
            fclose(targetIOFdPtr->Fd[i]);
          }                            /* if */
        }                              /* for */

        mxFree(targetIOFdPtr->Fd);
      }                                /* if */

      mxFree(targetIOFdPtr);
    }                                  /* if */

    ssSetPWorkValue(S, 3, NULL);
  }                                    /* if */
}

/* receive one packet of data and dispatch to owning application */
static boolean_T recvData(SimStruct *S, void* pComms)
{
  int * pCommErrorOccurred = (int *) ssGetPWorkValue(S, 4);
  void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
  if (pCommErrorOccurred == NULL) {
    ssSetErrorStatus( S,"pCommErrorOccurred is NULL.");
    return XILHOSTAPPSVC_ERROR;
  }                                    /* if */

  if (pXILUtils == NULL) {
    ssSetErrorStatus( S,"pXILUtils is NULL.");
    return XILHOSTAPPSVC_ERROR;
  }                                    /* if */

  *pCommErrorOccurred = (xilCommsRun(pComms, pXILUtils) !=
    XILCOMMS_RTIOSTREAM_SUCCESS);
  return (*pCommErrorOccurred?XILHOSTAPPSVC_ERROR:XILHOSTAPPSVC_SUCCESS);
}

/* send data via xil comms */
static boolean_T sendData(SimStruct *S, void* pXILService, XIL_IOBuffer_T
  * IOBuffer, mwSize sendSize)
{
  int * pCommErrorOccurred = (int *) ssGetPWorkValue(S, 4);
  if (pCommErrorOccurred == NULL) {
    ssSetErrorStatus( S,"pCommErrorOccurred is NULL.");
    return XILHOSTAPPSVC_ERROR;
  }                                    /* if */

  *pCommErrorOccurred = (xilHostAppSvcSend(pXILService, IOBuffer->data, sendSize)
    != XILHOSTAPPSVC_SUCCESS);
  return (*pCommErrorOccurred?XILHOSTAPPSVC_ERROR:XILHOSTAPPSVC_SUCCESS);
}

/* implements command dispatch */
static boolean_T commandDispatch(SimStruct *S, XIL_IOBuffer_T* IOBuffer, mwSize
  dataOutSize)
{
  void * pXILService = (void *) ssGetPWorkValue(S, 9);
  if (pXILService == NULL) {
    ssSetErrorStatus( S,"pXILService is NULL!");
    return XILHOSTAPPSVC_ERROR;
  }                                    /* if */

  /* send the data */
  if (sendData(S, pXILService, IOBuffer, dataOutSize) != XILHOSTAPPSVC_SUCCESS)
  {
    return XILHOSTAPPSVC_ERROR;
  }                                    /* if */

  return XILHOSTAPPSVC_SUCCESS;
}

/* implements command response */
static boolean_T commandResponse(SimStruct *S, mwSize * dataInSize,
  XILCommandResponseType* commandType)
{
  void * pXILService = (void *) ssGetPWorkValue(S, 9);
  if (pXILService == NULL) {
    ssSetErrorStatus( S,"pXILService is NULL!");
    return XILHOSTAPPSVC_ERROR;
  }                                    /* if */

  {
    /* receive the response data */
    uint8_T COMMAND_COMPLETE = 0;
    void * pComms = (void *) ssGetPWorkValue(S, 7);
    if (pComms == NULL) {
      ssSetErrorStatus( S,"pComms is NULL!");
      return XILHOSTAPPSVC_ERROR;
    }                                  /* if */

    while (!COMMAND_COMPLETE) {
      xilHostAppSvcSetIsResponseComplete(pXILService, 0);
      if (recvData(S, pComms) != XILHOSTAPPSVC_SUCCESS) {
        return XILHOSTAPPSVC_ERROR;
      }                                /* if */

      COMMAND_COMPLETE = xilHostAppSvcGetIsResponseComplete(pXILService);
    }                                  /* while */

    /* determine command response type */
    *commandType = (XILCommandResponseType) COMMAND_COMPLETE;
    *dataInSize = xilHostAppSvcGetPayloadSizeForOneStep(pXILService);
    return XILHOSTAPPSVC_SUCCESS;
  }
}

static void copyIOData(void * const dstPtr, void * const srcPtr, uint8_T **
  const tgtPtrPtr, size_t numElements, size_t cTypeSize)
{
  size_t maxBytesConsumed = numElements * cTypeSize;
  memcpy(dstPtr, srcPtr, maxBytesConsumed);
  (*tgtPtrPtr)+=(maxBytesConsumed/sizeof(**tgtPtrPtr));
}

static void callStopHookAndFreeSFcnMemory(SimStruct *S)
{
  closeAndFreeTargetIOFd(S);

  {
    {
      void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
      if (pXILUtils) {
        mxArray *rhs[3];
        char * simulinkBlockPath = getSimulinkBlockPath(S);
        if (simulinkBlockPath == NULL) {
          ssSetErrorStatus(S,
                           "ModelBlock SIL/PIL unexpected error: getSimulinkBlockPath returned NULL pointer. Check search string was found in ssGetPath.\n");
          return;
        }

        rhs[ 0 ] = mxCreateString(
          "@coder.connectivity.SimulinkInterface.getSILPILInterface");
        rhs[ 1 ] = mxCreateDoubleScalar( 1 );
        rhs[ 2 ] = mxCreateString(simulinkBlockPath);
        if (xilUtilsCallMATLAB(pXILUtils, 0, NULL, 3, rhs,
                               "rtw.pil.SILPILInterface.sfunctionPILStopHook")!=
            XIL_UTILS_SUCCESS) {
        }                              /* if */

        mxFree((void *) simulinkBlockPath);
      }                                /* if */
    }
  }

  if (ssGetPWork(S) != NULL) {
    int * pCommErrorOccurred = (int *) ssGetPWorkValue(S, 4);
    int * pIsXILApplicationStarted = (int *) ssGetPWorkValue(S, 5);
    if (pIsXILApplicationStarted != NULL) {
      mxFree(pIsXILApplicationStarted);
      ssSetPWorkValue(S, 5, NULL);
    }                                  /* if */

    if (pCommErrorOccurred != NULL) {
      mxFree(pCommErrorOccurred);
      ssSetPWorkValue(S, 4, NULL);
    }                                  /* if */
  }                                    /* if */

  if (ssGetPWork(S) != NULL) {
    XIL_IOBuffer_T* IOBufferPtr;
    XIL_RtIOStreamData_T * rtIOStreamDataPtr = (XIL_RtIOStreamData_T *)
      ssGetPWorkValue(S, 0);
    SIL_DEBUGGING_DATA_T * silDebuggingDataPtr = (SIL_DEBUGGING_DATA_T *)
      ssGetPWorkValue(S, 2);
    if (rtIOStreamDataPtr != NULL) {
      {
        int errorStatus = rtIOStreamUnloadLib(&rtIOStreamDataPtr->libH);
        if (errorStatus) {
          ssSetErrorStatus( S,"rtIOStreamUnloadLib failed.");
        }                              /* if */
      }

      mxFree(rtIOStreamDataPtr->lib);
      mxDestroyArray(rtIOStreamDataPtr->MATLABObject);
      mxFree(rtIOStreamDataPtr);
      ssSetPWorkValue(S, 0, NULL);
    }                                  /* if */

    if (silDebuggingDataPtr != NULL) {
      mxFree(silDebuggingDataPtr->componentBlockPath);
      mxFree(silDebuggingDataPtr->SILPILInterfaceFcnStr);
      mxFree(silDebuggingDataPtr);
      ssSetPWorkValue(S, 2, NULL);
    }                                  /* if */

    IOBufferPtr = (XIL_IOBuffer_T *) ssGetPWorkValue(S, 1);
    if (IOBufferPtr != NULL) {
      mxFree(IOBufferPtr->data);
      mxFree(IOBufferPtr);
      ssSetPWorkValue(S, 1, NULL);
    }                                  /* if */

    closeAndFreeTargetIOFd(S);
    if (ssGetPWork(S) != NULL) {
      void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
      void * pComms = (void *) ssGetPWorkValue(S, 7);
      void * pXILService = (void *) ssGetPWorkValue(S, 9);
      void * pCoderAssumptionsApp = (void *) ssGetPWorkValue(S, 10);
      if (pCoderAssumptionsApp != NULL) {
        coderAssumpHostAppSvcDestroy(pCoderAssumptionsApp);
        ssSetPWorkValue(S, 10, NULL);
      }                                /* if */

      if (pXILService != NULL) {
        xilHostAppSvcDestroy(pXILService);
        ssSetPWorkValue(S, 9, NULL);
      }                                /* if */

      if (pComms != NULL) {
        xilCommsDestroy(pComms);
      }                                /* if */

      ssSetPWorkValue(S, 7, NULL);
      if (pXILUtils != NULL) {
        xilUtilsDestroy(pXILUtils);
        ssSetPWorkValue(S, 6, NULL);
      }                                /* if */
    }                                  /* if */
  }                                    /* if */
}

static boolean_T processResponseError(SimStruct * S, uint8_T ** mxMemUnitPtrPtr)
{
  uint8_T errorId = **mxMemUnitPtrPtr;
  (*mxMemUnitPtrPtr)++;
  if (errorId) {
    {
      void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
      mxArray * rhs[ 2 ];
      rhs[0] = mxCreateString("PIL:pilverification:PILError");
      rhs[1] = mxCreateDoubleScalar(errorId);
      xilUtilsHandleError(pXILUtils, 2 , rhs );
      return XILHOSTAPPSVC_ERROR;
    }
  }                                    /* if */

  return XILHOSTAPPSVC_SUCCESS;
}

static boolean_T processResponsePrintf(SimStruct * S, uint8_T ** mxMemUnitPtrPtr)
{
  const int TARGET_IO_SUCCESS = 0;
  uint8_T PRINTF_ERROR;
  uint16_T PRINTF_SIZE;

  {
    uint8_T * simDataMemUnitPtr;
    simDataMemUnitPtr = (uint8_T *) &PRINTF_ERROR;

    {
      size_t num_elements = 1;

      {
        copyIOData(simDataMemUnitPtr, *mxMemUnitPtrPtr, &*mxMemUnitPtrPtr,
                   num_elements, sizeof(uint8_T));
      }
    }
  }

  {
    uint8_T * simDataMemUnitPtr;
    simDataMemUnitPtr = (uint8_T *) &PRINTF_SIZE;

    {
      size_t num_elements = 1;

      {
        copyIOData(simDataMemUnitPtr, *mxMemUnitPtrPtr, &*mxMemUnitPtrPtr,
                   num_elements, sizeof(uint16_T));
      }
    }
  }

  if (PRINTF_ERROR != TARGET_IO_SUCCESS) {
    {
      void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
      mxArray * rhs[ 2 ];
      rhs[0] = mxCreateString("PIL:pil:TargetIOError");
      rhs[1] = mxCreateDoubleScalar(PRINTF_ERROR);
      xilUtilsHandleError(pXILUtils, 2 , rhs );
      return XILHOSTAPPSVC_ERROR;
    }
  } else {
    uint8_T *pPrintBuff;
    pPrintBuff = *mxMemUnitPtrPtr;
    if (pPrintBuff[PRINTF_SIZE-1] == '\0') {
      mexPrintf("%s", pPrintBuff);
    }                                  /* if */
  }                                    /* if */

  (*mxMemUnitPtrPtr) = (*mxMemUnitPtrPtr) + PRINTF_SIZE;
  return XILHOSTAPPSVC_SUCCESS;
}

static boolean_T processResponseFopen(SimStruct * S, uint8_T ** mxMemUnitPtrPtr)
{
  uint16_T FOPEN_FID;
  uint16_T FOPEN_NAME_SIZE;
  targetIOFd_T *targetIOFdPtr;

  {
    uint8_T * simDataMemUnitPtr;
    simDataMemUnitPtr = (uint8_T *) &FOPEN_FID;

    {
      size_t num_elements = 1;

      {
        copyIOData(simDataMemUnitPtr, *mxMemUnitPtrPtr, &*mxMemUnitPtrPtr,
                   num_elements, sizeof(uint16_T));
      }
    }
  }

  {
    uint8_T * simDataMemUnitPtr;
    simDataMemUnitPtr = (uint8_T *) &FOPEN_NAME_SIZE;

    {
      size_t num_elements = 1;

      {
        copyIOData(simDataMemUnitPtr, *mxMemUnitPtrPtr, &*mxMemUnitPtrPtr,
                   num_elements, sizeof(uint16_T));
      }
    }
  }

  targetIOFdPtr = (targetIOFd_T *) ssGetPWorkValue(S, 3);
  if (targetIOFdPtr != NULL) {
    /* check fid increments by 1 */
    if (targetIOFdPtr->fidOffset + 1 == FOPEN_FID) {
      targetIOFdPtr->fidOffset = FOPEN_FID;
      growTargetIOFd(S, targetIOFdPtr, targetIOFdPtr->fidOffset + 1);
      if (targetIOFdPtr->Fd != NULL) {
        uint8_T *pFopenBuff;
        targetIOFdPtr->Fd[targetIOFdPtr->fidOffset] = NULL;
        pFopenBuff = (*mxMemUnitPtrPtr);
        if (pFopenBuff[FOPEN_NAME_SIZE-1] == '\0') {
          FILE * tmpFd = NULL;
          tmpFd = fopen((char *) pFopenBuff,"w");
          if (tmpFd != NULL) {
            /* save the file descriptor */
            targetIOFdPtr->Fd[targetIOFdPtr->fidOffset] = tmpFd;
          } else {
            {
              void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
              mxArray * rhs[ 2 ];
              rhs[0] = mxCreateString("PIL:pil:TargetIOFopenError");
              rhs[1] = mxCreateString((char *) pFopenBuff);
              xilUtilsHandleError(pXILUtils, 2 , rhs );
              return XILHOSTAPPSVC_ERROR;
            }
          }                            /* if */
        }                              /* if */
      }                                /* if */
    } else {
      {
        void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
        mxArray * rhs[ 2 ];
        rhs[0] = mxCreateString("PIL:pil:TargetIOFopenFidError");
        rhs[1] = mxCreateDoubleScalar(FOPEN_FID);
        xilUtilsHandleError(pXILUtils, 2 , rhs );
        return XILHOSTAPPSVC_ERROR;
      }
    }                                  /* if */
  }                                    /* if */

  (*mxMemUnitPtrPtr) = (*mxMemUnitPtrPtr) + FOPEN_NAME_SIZE;
  return XILHOSTAPPSVC_SUCCESS;
}

static boolean_T processResponseFprintf(SimStruct * S, uint8_T
  ** mxMemUnitPtrPtr)
{
  const int TARGET_IO_SUCCESS = 0;
  uint8_T FPRINTF_ERROR;
  uint16_T FPRINTF_FID;
  uint16_T FPRINTF_SIZE;

  {
    uint8_T * simDataMemUnitPtr;
    simDataMemUnitPtr = (uint8_T *) &FPRINTF_ERROR;

    {
      size_t num_elements = 1;

      {
        copyIOData(simDataMemUnitPtr, *mxMemUnitPtrPtr, &*mxMemUnitPtrPtr,
                   num_elements, sizeof(uint8_T));
      }
    }
  }

  {
    uint8_T * simDataMemUnitPtr;
    simDataMemUnitPtr = (uint8_T *) &FPRINTF_FID;

    {
      size_t num_elements = 1;

      {
        copyIOData(simDataMemUnitPtr, *mxMemUnitPtrPtr, &*mxMemUnitPtrPtr,
                   num_elements, sizeof(uint16_T));
      }
    }
  }

  {
    uint8_T * simDataMemUnitPtr;
    simDataMemUnitPtr = (uint8_T *) &FPRINTF_SIZE;

    {
      size_t num_elements = 1;

      {
        copyIOData(simDataMemUnitPtr, *mxMemUnitPtrPtr, &*mxMemUnitPtrPtr,
                   num_elements, sizeof(uint16_T));
      }
    }
  }

  if (FPRINTF_ERROR != TARGET_IO_SUCCESS) {
    {
      void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
      mxArray * rhs[ 2 ];
      rhs[0] = mxCreateString("PIL:pil:TargetIOError");
      rhs[1] = mxCreateDoubleScalar(FPRINTF_ERROR);
      xilUtilsHandleError(pXILUtils, 2 , rhs );
      return XILHOSTAPPSVC_ERROR;
    }
  } else {
    targetIOFd_T * targetIOFdPtr = (targetIOFd_T *) ssGetPWorkValue(S, 3);
    if (targetIOFdPtr != NULL) {
      if (targetIOFdPtr->size > FPRINTF_FID) {
        if (targetIOFdPtr->Fd[FPRINTF_FID] != NULL) {
          uint8_T *pFprintfBuff;
          pFprintfBuff = (*mxMemUnitPtrPtr);
          if (pFprintfBuff[FPRINTF_SIZE-1] == '\0') {
            fprintf(targetIOFdPtr->Fd[FPRINTF_FID], "%s", pFprintfBuff);
          }                            /* if */
        }                              /* if */
      }                                /* if */
    }                                  /* if */
  }                                    /* if */

  (*mxMemUnitPtrPtr) = (*mxMemUnitPtrPtr) + FPRINTF_SIZE ;
  return XILHOSTAPPSVC_SUCCESS;
}

static boolean_T processResponseSignalRaised(SimStruct * S, uint8_T
  ** mxMemUnitPtrPtr)
{
  const char *signalStr[5] = { "SIGFPE", "SIGILL", "SIGABRT", "SIGSEGV",
    "Unknown Signal" };

  uint8_T errorId = **mxMemUnitPtrPtr;
  (*mxMemUnitPtrPtr)++;

  {
    void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
    mxArray * rhs[ 3 ];
    rhs[0] = mxCreateString("Connectivity:target:CaughtTargetSignalWithStderr");
    rhs[1] = mxCreateString(signalStr[errorId]);
    rhs[2] = mxCreateDoubleScalar(ssGetT(S));
    xilUtilsHandleError(pXILUtils, 3 , rhs );
    return XILHOSTAPPSVC_ERROR;
  }

  return XILHOSTAPPSVC_SUCCESS;
}

static boolean_T processErrorAndTargetIOResponseCases(SimStruct * S, const int
  responseId, uint8_T ** mxMemUnitPtrPtr)
{
  switch (responseId) {
   case RESPONSE_ERROR:
    {
      return processResponseError(S, mxMemUnitPtrPtr);
    }

   case RESPONSE_PRINTF:
    {
      return processResponsePrintf(S, mxMemUnitPtrPtr);
    }

   case RESPONSE_FOPEN:
    {
      return processResponseFopen(S, mxMemUnitPtrPtr);
    }

   case RESPONSE_FPRINTF:
    {
      return processResponseFprintf(S, mxMemUnitPtrPtr);
    }

   case RESPONSE_SIGNAL_RAISED:
    {
      return processResponseSignalRaised(S, mxMemUnitPtrPtr);
    }

   default:
    {
      {
        void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
        mxArray * rhs[ 2 ];
        rhs[0] = mxCreateString("PIL:pilverification:UnknownResponseId");
        rhs[1] = mxCreateDoubleScalar(responseId);
        xilUtilsHandleError(pXILUtils, 2 , rhs );
        return XILHOSTAPPSVC_ERROR;
      }
    }
  }                                    /* switch */
}

static size_t getBusElementDimension(SimStruct * S, DTypeId dType, int_T
  offsetIdx)
{
  int_T numDimension = ssGetBusElementNumDimensions(S, dType, offsetIdx);
  const int_T *dims = ssGetBusElementDimensions(S, dType, offsetIdx);
  size_t numElements = 1;
  int j = 0;
  for (j = 0; j< numDimension; j++) {
    numElements *= dims[j];
  }                                    /* for */

  return numElements;
}

/* Process params function shared between mdlStart and mdlProcessParams */
static void processParams(SimStruct * S, boolean_T isMdlStartCall)
{
  if (ssGetPWork(S) != NULL) {
    int * pIsXILApplicationStarted = (int *) ssGetPWorkValue(S, 5);
    if ((pIsXILApplicationStarted!=NULL) && (*pIsXILApplicationStarted==1)) {
      {
        uint8_T * mxMemUnitPtr;
        mwSize dataInSize = 0;
        XIL_IOBuffer_T * IOBufferPtr = (XIL_IOBuffer_T *) ssGetPWorkValue(S, 1);
        if (IOBufferPtr != NULL) {
          void * pXILService = (void *) ssGetPWorkValue(S, 9);
          if (pXILService != NULL) {
            if (xilHostAppSvcGrowIOBuffer(pXILService, IOBufferPtr, 5, 0)!=
                XILHOSTAPPSVC_SUCCESS) {
              return;
            }                          /* if */

            if (IOBufferPtr->data != NULL) {
              mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;

              /* write command id */
              *mxMemUnitPtr = 8;
              mxMemUnitPtr++;

              {
                uint8_T * simDataMemUnitPtr;
                uint32_T commandDataFcnid = 0;
                simDataMemUnitPtr = (uint8_T *) &commandDataFcnid;

                {
                  size_t num_elements = 1;

                  {
                    copyIOData(mxMemUnitPtr, simDataMemUnitPtr, &mxMemUnitPtr,
                               num_elements, sizeof(uint32_T));
                  }
                }
              }

              /* dispatch command to the target */
              if (commandDispatch(S, IOBufferPtr, 5)!=XILHOSTAPPSVC_SUCCESS) {
                return;
              }                        /* if */

              {
                XILCommandResponseType commandResponseType =
                  XIL_COMMAND_NOT_COMPLETE;
                while (commandResponseType != XIL_STEP_COMPLETE) {
                  /* receive command from the target */
                  mwSize dataInSize = 0;
                  if (commandResponse(S, &dataInSize, &commandResponseType) !=
                      XILHOSTAPPSVC_SUCCESS) {
                    return;
                  }                    /* if */

                  if (dataInSize > 0) {
                    size_t dataInMemUnitSize = dataInSize;
                    uint8_T responseId = 0;
                    uint8_T * mxMemUnitPtrEnd;
                    mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;
                    mxMemUnitPtrEnd = mxMemUnitPtr + dataInMemUnitSize - 1;
                    while (mxMemUnitPtr <= mxMemUnitPtrEnd) {
                      /* read response id */
                      responseId = *mxMemUnitPtr;
                      mxMemUnitPtr++;
                      switch (responseId) {
                       case RESPONSE_ERROR:
                       case RESPONSE_PRINTF:
                       case RESPONSE_FOPEN:
                       case RESPONSE_FPRINTF:
                       case RESPONSE_SIGNAL_RAISED:
                        {
                          if (processErrorAndTargetIOResponseCases(S, responseId,
                               &mxMemUnitPtr)== XILHOSTAPPSVC_ERROR) {
                            return;
                          }            /* if */
                          break;
                        }

                       default:
                        {
                          {
                            void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
                            mxArray * rhs[ 2 ];
                            rhs[0] = mxCreateString(
                              "PIL:pilverification:UnknownResponseId");
                            rhs[1] = mxCreateDoubleScalar(responseId);
                            xilUtilsHandleError(pXILUtils, 2 , rhs );
                            return;
                          }
                          break;
                        }
                      }                /* switch */
                    }                  /* while */
                  }                    /* if */
                }                      /* while */
              }
            }                          /* if */
          }                            /* if */
        }                              /* if */
      }
    }                                  /* if */
  }                                    /* if */
}

static void initializeInfAndMinusInf(void)
{
  typedef struct {
    struct {
      uint32_T wordL;
      uint32_T wordH;
    } words;
  } LittleEndianIEEEDouble;

  rtInf = 0.0;
  rtMinusInf = 0.0;

  {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal1;

    tmpVal1.bitVal.words.wordH = 0x7FF00000U;
    tmpVal1.bitVal.words.wordL = 0x00000000U;
    rtInf = tmpVal1.fltVal;
  }

  {
    union {
      LittleEndianIEEEDouble bitVal;
      real_T fltVal;
    } tmpVal2;

    tmpVal2.bitVal.words.wordH = 0xFFF00000U;
    tmpVal2.bitVal.words.wordL = 0x00000000U;
    rtMinusInf = tmpVal2.fltVal;
  }
}

static void mdlStart(SimStruct *S);
static void mdlSystemInitialize(SimStruct *S)
{
  if (ssGetPWork(S) != NULL) {
    int * pIsXILApplicationStarted = (int *) ssGetPWorkValue(S, 5);
    if (!pIsXILApplicationStarted) {
      mdlStart(S);
    }                                  /* if */
  }                                    /* if */

  {
    uint8_T * mxMemUnitPtr;
    mwSize dataInSize = 0;
    XIL_IOBuffer_T * IOBufferPtr = (XIL_IOBuffer_T *) ssGetPWorkValue(S, 1);
    if (IOBufferPtr != NULL) {
      void * pXILService = (void *) ssGetPWorkValue(S, 9);
      if (pXILService != NULL) {
        if (xilHostAppSvcGrowIOBuffer(pXILService, IOBufferPtr, 5, 0)!=
            XILHOSTAPPSVC_SUCCESS) {
          return;
        }                              /* if */

        if (IOBufferPtr->data != NULL) {
          mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;

          /* write command id */
          *mxMemUnitPtr = 2;
          mxMemUnitPtr++;

          {
            uint8_T * simDataMemUnitPtr;
            uint32_T commandDataFcnid = 0;
            simDataMemUnitPtr = (uint8_T *) &commandDataFcnid;

            {
              size_t num_elements = 1;

              {
                copyIOData(mxMemUnitPtr, simDataMemUnitPtr, &mxMemUnitPtr,
                           num_elements, sizeof(uint32_T));
              }
            }
          }

          /* dispatch command to the target */
          if (commandDispatch(S, IOBufferPtr, 5)!=XILHOSTAPPSVC_SUCCESS) {
            return;
          }                            /* if */

          {
            XILCommandResponseType commandResponseType =
              XIL_COMMAND_NOT_COMPLETE;
            while (commandResponseType != XIL_STEP_COMPLETE) {
              /* receive command from the target */
              mwSize dataInSize = 0;
              if (commandResponse(S, &dataInSize, &commandResponseType) !=
                  XILHOSTAPPSVC_SUCCESS) {
                return;
              }                        /* if */

              if (dataInSize > 0) {
                size_t dataInMemUnitSize = dataInSize;
                uint8_T responseId = 0;
                uint8_T * mxMemUnitPtrEnd;
                mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;
                mxMemUnitPtrEnd = mxMemUnitPtr + dataInMemUnitSize - 1;
                while (mxMemUnitPtr <= mxMemUnitPtrEnd) {
                  /* read response id */
                  responseId = *mxMemUnitPtr;
                  mxMemUnitPtr++;
                  switch (responseId) {
                   case RESPONSE_ERROR:
                   case RESPONSE_PRINTF:
                   case RESPONSE_FOPEN:
                   case RESPONSE_FPRINTF:
                   case RESPONSE_SIGNAL_RAISED:
                    {
                      if (processErrorAndTargetIOResponseCases(S, responseId,
                           &mxMemUnitPtr)== XILHOSTAPPSVC_ERROR) {
                        return;
                      }                /* if */
                      break;
                    }

                   case RESPONSE_OUTPUT_DATA:
                    {
                      {
                        uint8_T * simDataMemUnitPtr;
                        simDataMemUnitPtr = ( uint8_T *) ssGetOutputPortSignal(S,
                          0);

                        {
                          size_t num_elements = 1;

                          {
                            copyIOData(simDataMemUnitPtr, mxMemUnitPtr,
                                       &mxMemUnitPtr, num_elements, sizeof
                                       (real32_T));
                          }
                        }
                      }

                      {
                        uint8_T * simDataMemUnitPtr;
                        simDataMemUnitPtr = ( uint8_T *) ssGetOutputPortSignal(S,
                          1);

                        {
                          size_t num_elements = 1;

                          {
                            copyIOData(simDataMemUnitPtr, mxMemUnitPtr,
                                       &mxMemUnitPtr, num_elements, sizeof
                                       (int32_T));
                          }
                        }
                      }
                      break;
                    }

                   default:
                    {
                      {
                        void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
                        mxArray * rhs[ 2 ];
                        rhs[0] = mxCreateString(
                          "PIL:pilverification:UnknownResponseId");
                        rhs[1] = mxCreateDoubleScalar(responseId);
                        xilUtilsHandleError(pXILUtils, 2 , rhs );
                        return;
                      }
                      break;
                    }
                  }                    /* switch */
                }                      /* while */
              }                        /* if */
            }                          /* while */
          }
        }                              /* if */
      }                                /* if */
    }                                  /* if */
  }
}

static void mdlSystemReset(SimStruct *S)
{
  {
    void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
    mxArray * prhs[ 1 ];
    prhs[0] = mxCreateString("PIL:pil:InitCondOptimCallbackError");
    if (xilUtilsCallMATLAB(pXILUtils, 0, NULL, 1, prhs, "DAStudio.error") !=
        XIL_UTILS_SUCCESS) {
      return;
    }                                  /* if */
  }
}

/* This function checks the attributes of tunable parameters. */
#define MDL_CHECK_PARAMETERS
#if defined(MDL_CHECK_PARAMETERS) && defined(MATLAB_MEX_FILE)

static void mdlCheckParameters(SimStruct *S)
{
}

#endif                                 /* MDL_CHECK_PARAMETERS */

static void mdlInitializeSizes(SimStruct *S)
{
  ssSetNumSFcnParams(S, 0);            /* Number of expected parameters */
  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {

#if defined(MDL_CHECK_PARAMETERS)

    mdlCheckParameters(S);

#endif

    if (ssGetErrorStatus(S) != (NULL))
      return;
  } else {
    /* Parameter mismatch will be reported by Simulink */
    return;
  }

  ssSetNumContStates(S, 0);
  ssSetNumDiscStates(S, 0);

  /* no support for SimState */
  ssSetSimStateCompliance(S, DISALLOW_SIM_STATE);

  /* Allow signal dimensions greater than 2 */
  ssAllowSignalsWithMoreThan2D(S);

  /* Allow fixed-point data types with 33 or more bits */
  ssFxpSetU32BitRegionCompliant(S,1);

  {
    mxArray * lhs[1];
    mxArray * error = NULL;
    char * installVersion;
    error = mexCallMATLABWithTrap(1, lhs, 0, NULL, "rtw.pil.getPILVersion");
    if (error != NULL) {
      mxDestroyArray(error);
      ssSetErrorStatus( S,
                       "Failed to determine the installed In-the-Loop version for comparison against the In-the-Loop s-function version (release 6.10 (R2016a)_12). To avoid this error, remove the In-the-Loop s-function from your MATLAB path (e.g. delete it or move to a clean working directory).");
      return;
    }                                  /* if */

    if (mxIsEmpty(lhs[0])) {
      ssSetErrorStatus( S,"rtw.pil.getPILVersion returned empty!");
      return;
    }                                  /* if */

    installVersion = mxArrayToString(lhs[0]);
    mxDestroyArray(lhs[0]);
    if (installVersion == NULL) {
      ssSetErrorStatus( S,"Failed to determine installed In-the-Loop version.");
      return;
    }                                  /* if */

    if (strcmp(installVersion, "6.10 (R2016a)_12") != 0) {
      ssSetErrorStatus( S,
                       "The In-the-Loop s-function is incompatible with the installed In-the-Loop version (see ver('ecoder')); it was generated for release 6.10 (R2016a)_12. To avoid this error, remove the In-the-Loop s-function from your MATLAB path (e.g. delete it or move to a clean working directory)");
      return;
    }                                  /* if */

    mxFree(installVersion);
  }

  initializeInfAndMinusInf();
  if (S->mdlInfo->genericFcn != NULL) {
    _GenericFcn fcn = S->mdlInfo->genericFcn;
    int_T hwSettings[15];
    int_T opSettings[2];
    boolean_T disallowsMdlRefFromVarStepTop;
    real_T lifeSpan, startTime, stopTime;
    disallowsMdlRefFromVarStepTop = 1;
    lifeSpan = 1.0;
    startTime = 0.0;
    stopTime = 2000.0;
    (fcn)(S, GEN_FCN_CHK_MODELREF_SOLVER_TYPE_EARLY, 2, NULL);
    if (!(fcn)(S, GEN_FCN_CHK_MODELREF_LIFE_SPAN, -1, &lifeSpan))
      return;
    if (!(fcn)(S, GEN_FCN_CHK_MODELREF_START_TIME, -1, &startTime))
      return;
    if (!(fcn)(S, GEN_FCN_CHK_MODELREF_STOP_TIME, -1, &stopTime))
      return;
    hwSettings[0] = 8;
    hwSettings[1] = 16;
    hwSettings[2] = 32;
    hwSettings[3] = 32;
    hwSettings[4] = 32;
    hwSettings[5] = 64;
    hwSettings[6] = 32;
    hwSettings[7] = 0;
    hwSettings[8] = 1;
    hwSettings[9] = 32;
    hwSettings[10] = 1;
    hwSettings[11] = 0;
    hwSettings[12] = 2;
    hwSettings[13] = 64;
    hwSettings[14] = 1;
    if (!(fcn)(S, GEN_FCN_CHK_MODELREF_HARDWARE_SETTINGS, 15, hwSettings))
      return;
    opSettings[0] = 2;
    slmrSetIsInlineParamsOn(S, true);
    opSettings[1] = 0;
    if (!(fcn)(S, GEN_FCN_CHK_MODELREF_OPTIM_SETTINGS, 2, opSettings))
      return;
    if (!(fcn)(S, GEN_FCN_CHK_MODELREF_CONCURRETNT_TASK_SUPPORT, 0, NULL))
      return;
    if (!(fcn)(S, GEN_FCN_CHK_MODELREF_SOLVER_NAME, 0, (void *)
               "FixedStepDiscrete"))
      return;

    {
      real_T fixedStep = 0.01;
      if (!(fcn)(S, GEN_FCN_CHK_MODELREF_FIXED_STEP, 0, &fixedStep))
        return;
    }

    if (!(fcn)(S, GEN_FCN_CHK_MODELREF_SOLVER_TYPE, 2,
               &disallowsMdlRefFromVarStepTop))
      return;
    if (!(fcn)(S, GEN_FCN_CHK_MODELREF_SOLVER_MODE, SOLVER_MODE_SINGLETASKING,
               NULL))
      return;
    if (!(fcn)(S, GEN_FCN_CHK_MODELREF_DATA_DICTIONARY, 0, (void *)""))
      return;
  }

  slmrSetDataDictionarySet(S, "");
  ssSetRTWGeneratedSFcn(S, 2);
  if (S->mdlInfo->genericFcn != NULL) {
    _GenericFcn fcn = S->mdlInfo->genericFcn;
    (fcn)(S, GEN_FCN_CHK_MODELREF_FRAME_UPGRADE_DIAGNOSTICS, 2, NULL);
  }

  slmrInitializeIOPortDataVectors(S, 1, 2);
  if (!ssSetNumInputPorts(S, 1))
    return;
  if (!ssSetInputPortVectorDimension(S, 0, 1))
    return;
  ssSetInputPortDimensionsMode(S, 0, FIXED_DIMS_MODE);
  ssSetInputPortFrameData(S, 0, FRAME_NO);
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {

#if defined (MATLAB_MEX_FILE)

    {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(
        S,
        "EngSensors",
        &dataTypeIdReg);
      if (dataTypeIdReg == INVALID_DTYPE_ID)
        return;
      ssSetInputPortDataType(S, 0, dataTypeIdReg);
    }

#endif

  }

  ssSetInputPortDirectFeedThrough(S, 0, 1);
  ssSetInputPortRequiredContiguous(S, 0, 1);
  ssSetInputPortOverWritable(S, 0, false);
  ssSetInputPortSampleTime(S, 0, 0.01);
  ssSetInputPortOffsetTime(S, 0, 0.0);
  if (!ssSetNumOutputPorts(S, 2))
    return;
  if (!ssSetOutputPortVectorDimension(S, 0, 1))
    return;
  ssSetOutputPortDimensionsMode(S, 0, FIXED_DIMS_MODE);
  ssSetOutputPortFrameData(S, 0, FRAME_NO);
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 0, SS_SINGLE);
  }

  ssSetOutputPortSampleTime(S, 0, 0.01);
  ssSetOutputPortOffsetTime(S, 0, 0.0);
  slmrModelRefSetOutputPortDrivenByResetITVS(S, 0, false);
  if (!ssSetOutputPortVectorDimension(S, 1, 1))
    return;
  ssSetOutputPortDimensionsMode(S, 1, FIXED_DIMS_MODE);
  ssSetOutputPortFrameData(S, 1, FRAME_NO);
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {

#if defined (MATLAB_MEX_FILE)

    {
      DTypeId dataTypeIdReg;
      ssRegisterTypeFromNamedObject(
        S,
        "Fueling_ModeType",
        &dataTypeIdReg);
      if (dataTypeIdReg == INVALID_DTYPE_ID)
        return;
      ssSetOutputPortDataType(S, 1, dataTypeIdReg);
    }

#endif

  }

  ssSetOutputPortSampleTime(S, 1, 0.01);
  ssSetOutputPortOffsetTime(S, 1, 0.0);
  slmrModelRefSetOutputPortDrivenByResetITVS(S, 1, false);
  slmrModelRefSetHasDescExpFcnMdl(S, false);
  slmrSetModelRefOriginalInportBusType(S, 0, "EngSensors");
  ssSetModelRefSignalLoggingSaveFormat(S, SS_DATASET_FORMAT);
  slmrSetModelRefLoggingSaveFormat(S, SS_STRUCTUREWITHTIME_FORMAT);
  ssSetAcceptsFcnCallInputs(S);
  ssSetNumExplicitTaskingTs(S, 0);
  ssSetParameterChangeEventTID(S, -1);

  /* All sample times are available through ports. Use port based sample times. */
  ssSetNumSampleTimes(S, PORT_BASED_SAMPLE_TIMES);
  ssSetParameterTuningCompliance(S, true);
  ssSetModelReferenceSampleTimeInheritanceRule(S,
    DISALLOW_SAMPLE_TIME_INHERITANCE);
  slmrSetHasNonVirtualConstantTs(S, true);
  ssSetOptions(S, SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES |
               SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME |
               SS_OPTION_CALL_TERMINATE_ON_EXIT);
  slmrRegisterSystemInitializeMethod(S, mdlSystemInitialize);
  slmrRegisterSystemResetMethod(S, mdlSystemReset);
  ssSetNumPWork(S, 11);
  ssSetNumRWork(S, 0);
  ssSetNumIWork(S, 0);
  ssSetNumModes(S, 0);
  ssSetNumNonsampledZCs(S, 0);
  ssSetModelReferenceNormalModeSupport(S, MDL_START_AND_MDL_PROCESS_PARAMS_OK);

  {
    static ssRTWStorageType storageClass[3] = { SS_RTW_STORAGE_AUTO,
      SS_RTW_STORAGE_AUTO, SS_RTW_STORAGE_AUTO };

    ssSetModelRefPortRTWStorageClasses(S, storageClass);
  }

  ssSetModelReferenceConsistentOutportInitialization(S, false);
  ssSetModelRefHasEnablePort(S,0);
  ssSetOptimizeModelRefInitCode(S, 1);
  if (S->mdlInfo->genericFcn != (NULL)) {
    ssRegModelRefChildModel(S, 1, childModels);
  }
}

#define MDL_SET_INPUT_PORT_SAMPLE_TIME                           /* Change to #undef to remove function */
#if defined(MDL_SET_INPUT_PORT_SAMPLE_TIME) && defined(MATLAB_MEX_FILE)

static void mdlSetInputPortSampleTime(SimStruct *S, int_T portIdx, real_T
  sampleTime, real_T offsetTime)
{
  /* sample times are fully specified, not inherited */
}

#endif                                 /* MDL_SET_INPUT_PORT_SAMPLE_TIME */

#define MDL_SET_OUTPUT_PORT_SAMPLE_TIME                          /* Change to #undef to remove function */
#if defined(MDL_SET_OUTPUT_PORT_SAMPLE_TIME) && defined(MATLAB_MEX_FILE)

static void mdlSetOutputPortSampleTime(SimStruct *S, int_T portIdx, real_T
  sampleTime, real_T offsetTime)
{
  /* sample times are fully specified, not inherited */
}

#endif                                 /* MDL_SET_OUTPUT_PORT_SAMPLE_TIME */

static void mdlInitializeSampleTimes(SimStruct *S)
{
  /* This block has port based sample time. */
  return;
}

#define MDL_START                                                /* Change to #undef to remove function */
#if defined(MDL_START)

static void mdlStart(SimStruct *S)
{
  {
    int retValXILUtils = XIL_UTILS_SUCCESS;
    void* pXILUtils = NULL;
    retValXILUtils = xilSimulinkUtilsCreate(&pXILUtils, S);
    if (retValXILUtils!=XIL_UTILS_SUCCESS) {
      ssSetErrorStatus( S,"Error instantiating XIL Utils!");
      return;
    }                                  /* if */

    ssSetPWorkValue(S, 6, pXILUtils);
  }

  {
    mxArray *rhs[4];
    mxArray *lhs[1];
    char * rootLoggingPath;
    char * simulinkBlockPath = getSimulinkBlockPath(S);
    if (simulinkBlockPath == NULL) {
      ssSetErrorStatus(S,
                       "ModelBlock SIL/PIL unexpected error: getSimulinkBlockPath returned NULL pointer. Check search string was found in ssGetPath.\n");
      return;
    }

    rhs[ 0 ] = mxCreateString(
      "@coder.connectivity.SimulinkInterface.getSILPILInterface");
    rhs[ 1 ] = mxCreateDoubleScalar( 1 );
    rhs[ 2 ] = mxCreateString(simulinkBlockPath);
    rhs[3] = mxCreateString(ssGetPath(ssGetRootSS(S)));

    {
      void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
      if (xilUtilsCallMATLAB(pXILUtils, 1, lhs, 4, rhs,
                             "rtw.pil.SILPILInterface.sfunctionInitializeHook")
          !=XIL_UTILS_SUCCESS) {
        return;
      }                                /* if */
    }

    rootLoggingPath = mxArrayToString(lhs[0]);
    mxDestroyArray(lhs[0]);

    {
      int * pCommErrorOccurred = (int *) mxCalloc(1, sizeof(int));
      if (pCommErrorOccurred == NULL) {
        ssSetErrorStatus( S,
                         "Error in allocating memory for pCommErrorOccurred through mxCalloc.");
        return;
      }                                /* if */

      *pCommErrorOccurred = 0;
      mexMakeMemoryPersistent(pCommErrorOccurred);
      ssSetPWorkValue(S, 4, pCommErrorOccurred);
    }

    mxFree((void *) simulinkBlockPath);
    mxFree(rootLoggingPath);
  }

  {
    int * pIsXILApplicationStarted = (int *) mxCalloc(1, sizeof(int));
    if (pIsXILApplicationStarted == NULL) {
      ssSetErrorStatus( S,
                       "Error in allocating memory for pIsXILApplicationStarted through mxCalloc.");
      return;
    }                                  /* if */

    *pIsXILApplicationStarted = 0;
    mexMakeMemoryPersistent(pIsXILApplicationStarted);
    ssSetPWorkValue(S, 5, pIsXILApplicationStarted);
  }

  {
    {
      mxArray *rhs[4];
      char * simulinkBlockPath = getSimulinkBlockPath(S);
      if (simulinkBlockPath == NULL) {
        ssSetErrorStatus(S,
                         "ModelBlock SIL/PIL unexpected error: getSimulinkBlockPath returned NULL pointer. Check search string was found in ssGetPath.\n");
        return;
      }

      rhs[ 0 ] = mxCreateString(
        "@coder.connectivity.SimulinkInterface.getSILPILInterface");
      rhs[ 1 ] = mxCreateDoubleScalar( 1 );
      rhs[ 2 ] = mxCreateString(simulinkBlockPath);
      rhs[3] = mxCreateString("uint8");

      {
        void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
        if (xilUtilsCallMATLAB(pXILUtils, 0, 0, 4, rhs,
                               "rtw.pil.SILPILInterface.sfunctionPILStartHook")
            !=XIL_UTILS_SUCCESS) {
          return;
        }                              /* if */
      }

      mxFree((void *) simulinkBlockPath);
    }

    {                                  /* record that the XIL application has started */
      int * pIsXILApplicationStarted = (int *) ssGetPWorkValue(S, 5);
      *pIsXILApplicationStarted = 1;
      ssSetPWorkValue(S, 5, pIsXILApplicationStarted);
    }
  }

  {
    mxArray *rhs[3];
    mxArray *lhs[5];
    char * simulinkBlockPath = getSimulinkBlockPath(S);
    if (simulinkBlockPath == NULL) {
      ssSetErrorStatus(S,
                       "ModelBlock SIL/PIL unexpected error: getSimulinkBlockPath returned NULL pointer. Check search string was found in ssGetPath.\n");
      return;
    }

    rhs[ 0 ] = mxCreateString(
      "@coder.connectivity.SimulinkInterface.getSILPILInterface");
    rhs[ 1 ] = mxCreateDoubleScalar( 1 );
    rhs[ 2 ] = mxCreateString(simulinkBlockPath);

    {
      void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
      if (xilUtilsCallMATLAB(pXILUtils, 5, lhs, 3, rhs,
                             "rtw.pil.SILPILInterface.sfunctionGetRtIOStreamInfoHook")
          !=XIL_UTILS_SUCCESS) {
        return;
      }                                /* if */
    }

    mxFree((void *) simulinkBlockPath);

    {
      XIL_RtIOStreamData_T* rtIOStreamDataPtr = (XIL_RtIOStreamData_T*) mxCalloc
        (1, sizeof(XIL_RtIOStreamData_T));
      if (rtIOStreamDataPtr == NULL) {
        ssSetErrorStatus( S,"Error in allocating memory through mxCalloc.");
        return;
      }                                /* if */

      rtIOStreamDataPtr->lib = mxArrayToString(lhs[0]);
      rtIOStreamDataPtr->MATLABObject = mxDuplicateArray(lhs[1]);
      mexMakeMemoryPersistent(rtIOStreamDataPtr);
      mexMakeMemoryPersistent(rtIOStreamDataPtr->lib);
      mexMakeArrayPersistent(rtIOStreamDataPtr->MATLABObject);
      rtIOStreamDataPtr->streamID = *mxGetPr(lhs[2]);
      rtIOStreamDataPtr->recvTimeout = *mxGetPr(lhs[3]);
      rtIOStreamDataPtr->sendTimeout = *mxGetPr(lhs[4]);
      rtIOStreamDataPtr->isRtIOStreamCCall = 1;
      rtIOStreamDataPtr->ioMxClassID = mxUINT8_CLASS;
      rtIOStreamDataPtr->ioDataSize = sizeof(uint8_T);
      rtIOStreamDataPtr->targetRecvBufferSizeBytes = 50000;
      rtIOStreamDataPtr->targetSendBufferSizeBytes = 50000;

      {
        int errorStatus = rtIOStreamLoadLib(&rtIOStreamDataPtr->libH,
          rtIOStreamDataPtr->lib);
        if (errorStatus) {
          ssSetErrorStatus( S,"rtIOStreamLoadLib failed.");
          return;
        }                              /* if */
      }

      ssSetPWorkValue(S, 0, rtIOStreamDataPtr);
    }

    {
      int i;
      for (i=0; i<5; i++) {
        mxDestroyArray(lhs[i]);
      }                                /* for */
    }
  }

  {
    XIL_IOBuffer_T* IOBufferPtr = (XIL_IOBuffer_T *) mxCalloc(1, sizeof
      (XIL_IOBuffer_T));
    if (IOBufferPtr == NULL) {
      ssSetErrorStatus( S,"Error in allocating memory through mxCalloc.");
      return;
    }                                  /* if */

    mexMakeMemoryPersistent(IOBufferPtr);
    ssSetPWorkValue(S, 1, IOBufferPtr);
  }

  {
    SIL_DEBUGGING_DATA_T* silDebuggingDataPtr = (SIL_DEBUGGING_DATA_T*) mxCalloc
      (1, sizeof(SIL_DEBUGGING_DATA_T));
    char * simulinkBlockPath = getSimulinkBlockPath(S);
    if (simulinkBlockPath == NULL) {
      ssSetErrorStatus(S,
                       "ModelBlock SIL/PIL unexpected error: getSimulinkBlockPath returned NULL pointer. Check search string was found in ssGetPath.\n");
      return;
    }

    if (silDebuggingDataPtr == NULL) {
      ssSetErrorStatus( S,
                       "Error in allocating memory through mxCalloc for SIL_DEBUGGING_DATA_T.");
      return;
    }                                  /* if */

    silDebuggingDataPtr->componentBlockPath = strcpy((char *) mxCalloc(strlen
      (simulinkBlockPath)+1, sizeof(char)), simulinkBlockPath);
    silDebuggingDataPtr->SILPILInterfaceFcnStr = strcpy((char*) mxCalloc(57,
      sizeof(char)), "@coder.connectivity.SimulinkInterface.getSILPILInterface");
    silDebuggingDataPtr->inTheLoopType = 1;
    mexMakeMemoryPersistent(silDebuggingDataPtr);
    mexMakeMemoryPersistent(silDebuggingDataPtr->componentBlockPath);
    mexMakeMemoryPersistent(silDebuggingDataPtr->SILPILInterfaceFcnStr);
    ssSetPWorkValue(S, 2, silDebuggingDataPtr);
  }

  {
    targetIOFd_T * targetIOFdPtr = (targetIOFd_T *) mxCalloc(1, sizeof
      (targetIOFd_T));
    if (targetIOFdPtr == NULL) {
      return;
    }                                  /* if */

    mexMakeMemoryPersistent(targetIOFdPtr);
    targetIOFdPtr->size = 0;
    targetIOFdPtr->Fd = NULL;
    targetIOFdPtr->fidOffset = -1;
    ssSetPWorkValue(S, 3, targetIOFdPtr);
  }

  {
    void* pConnectionOptions = NULL;
    void* pComms = NULL;
    void* pXILService = NULL;
    void* pMemUnitTransformer = NULL;
    void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
    uint8_T memUnitSizeBytes = 1;
    uint8_T ioDataTypeSizeBytes = sizeof(uint8_T);
    XIL_RtIOStreamData_T * rtIOStreamDataPtr = (XIL_RtIOStreamData_T *)
      ssGetPWorkValue(S, 0);
    SIL_DEBUGGING_DATA_T * silDebuggingDataPtr = (SIL_DEBUGGING_DATA_T *)
      ssGetPWorkValue(S, 2);
    XIL_IOBuffer_T * IOBufferPtr = (XIL_IOBuffer_T *) ssGetPWorkValue(S, 1);
    void * pCoderAssumptionsApp = NULL;
    if (xilCommsCreate(&pComms, rtIOStreamDataPtr, silDebuggingDataPtr,
                       memUnitSizeBytes, pMemUnitTransformer, pXILUtils) !=
        XILCOMMS_RTIOSTREAM_SUCCESS) {
      return;
    }                                  /* if */

    if (xilHostAppSvcCreate(&pXILService, pComms, pXILUtils, IOBufferPtr,
                            memUnitSizeBytes, ioDataTypeSizeBytes, 0) !=
        XILHOSTAPPSVC_SUCCESS) {
      return;
    }                                  /* if */

    {
      mxArray * codeGenComponent = mxCreateString("sltestFuelRateControlExample");
      if (coderAssumpHostAppSvcCreate(&pCoderAssumptionsApp, pComms, pXILUtils,
           0, 1, codeGenComponent, 1, 0) != CODERASSUMPHOSTAPPSVC_SUCCESS) {
        return;
      }                                /* if */
    }

    xilCommsRegisterApplication(pComms, pXILService);
    xilCommsRegisterApplication(pComms, pCoderAssumptionsApp);
    ssSetPWorkValue(S, 9, pXILService);
    ssSetPWorkValue(S, 7, pComms);
    ssSetPWorkValue(S, 6, pXILUtils);
    ssSetPWorkValue(S, 10, pCoderAssumptionsApp);
  }

  {
    uint8_T * mxMemUnitPtr;
    mwSize dataInSize = 0;
    XIL_IOBuffer_T * IOBufferPtr = (XIL_IOBuffer_T *) ssGetPWorkValue(S, 1);
    if (IOBufferPtr != NULL) {
      void * pXILService = (void *) ssGetPWorkValue(S, 9);
      if (pXILService != NULL) {
        if (xilHostAppSvcGrowIOBuffer(pXILService, IOBufferPtr, 5, 0)!=
            XILHOSTAPPSVC_SUCCESS) {
          return;
        }                              /* if */

        if (IOBufferPtr->data != NULL) {
          mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;

          /* write command id */
          *mxMemUnitPtr = 0;
          mxMemUnitPtr++;

          {
            uint8_T * simDataMemUnitPtr;
            uint32_T commandDataFcnid = 0;
            simDataMemUnitPtr = (uint8_T *) &commandDataFcnid;

            {
              size_t num_elements = 1;

              {
                copyIOData(mxMemUnitPtr, simDataMemUnitPtr, &mxMemUnitPtr,
                           num_elements, sizeof(uint32_T));
              }
            }
          }

          /* dispatch command to the target */
          if (commandDispatch(S, IOBufferPtr, 5)!=XILHOSTAPPSVC_SUCCESS) {
            return;
          }                            /* if */

          {
            XILCommandResponseType commandResponseType =
              XIL_COMMAND_NOT_COMPLETE;
            while (commandResponseType != XIL_STEP_COMPLETE) {
              /* receive command from the target */
              mwSize dataInSize = 0;
              if (commandResponse(S, &dataInSize, &commandResponseType) !=
                  XILHOSTAPPSVC_SUCCESS) {
                return;
              }                        /* if */

              if (dataInSize > 0) {
                size_t dataInMemUnitSize = dataInSize;
                uint8_T responseId = 0;
                uint8_T * mxMemUnitPtrEnd;

#define RESPONSE_TYPE_SIZE             6

                mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;
                mxMemUnitPtrEnd = mxMemUnitPtr + dataInMemUnitSize - 1;
                while (mxMemUnitPtr <= mxMemUnitPtrEnd) {
                  /* read response id */
                  responseId = *mxMemUnitPtr;
                  mxMemUnitPtr++;
                  switch (responseId) {
                   case RESPONSE_ERROR:
                   case RESPONSE_PRINTF:
                   case RESPONSE_FOPEN:
                   case RESPONSE_FPRINTF:
                   case RESPONSE_SIGNAL_RAISED:
                    {
                      if (processErrorAndTargetIOResponseCases(S, responseId,
                           &mxMemUnitPtr)== XILHOSTAPPSVC_ERROR) {
                        return;
                      }                /* if */
                      break;
                    }

                   case RESPONSE_TYPE_SIZE:
                    {
                      uint8_T typeId = *mxMemUnitPtr;
                      uint8_T typeBytes;
                      mxMemUnitPtr++;
                      typeBytes = *mxMemUnitPtr;
                      mxMemUnitPtr++;
                      switch (typeId) {
                       case SS_SINGLE:
                        {
                          if (typeBytes != 4) {
                            {
                              void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
                              mxArray * rhs[ 3 ];
                              rhs[0] = mxCreateString(
                                "PIL:pilverification:SingleUnsupported");
                              rhs[1] = mxCreateDoubleScalar(4);
                              rhs[2] = mxCreateDoubleScalar(typeBytes);
                              xilUtilsHandleError(pXILUtils, 3 , rhs );
                              return;
                            }
                          }            /* if */
                          break;
                        }

                       case SS_DOUBLE:
                        {
                          if (typeBytes != 8) {
                            {
                              void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
                              mxArray * rhs[ 3 ];
                              rhs[0] = mxCreateString(
                                "PIL:pilverification:DoubleUnsupported");
                              rhs[1] = mxCreateDoubleScalar(8);
                              rhs[2] = mxCreateDoubleScalar(typeBytes);
                              xilUtilsHandleError(pXILUtils, 3 , rhs );
                              return;
                            }
                          }            /* if */
                          break;
                        }

                       default:
                        {
                          {
                            void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
                            mxArray * rhs[ 2 ];
                            rhs[0] = mxCreateString(
                              "PIL:pilverification:UnknownTypeId");
                            rhs[1] = mxCreateDoubleScalar(typeId);
                            xilUtilsHandleError(pXILUtils, 2 , rhs );
                            return;
                          }
                          break;
                        }
                      }                /* switch */
                      break;
                    }

                   default:
                    {
                      {
                        void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
                        mxArray * rhs[ 2 ];
                        rhs[0] = mxCreateString(
                          "PIL:pilverification:UnknownResponseId");
                        rhs[1] = mxCreateDoubleScalar(responseId);
                        xilUtilsHandleError(pXILUtils, 2 , rhs );
                        return;
                      }
                      break;
                    }
                  }                    /* switch */
                }                      /* while */
              }                        /* if */
            }                          /* while */
          }
        }                              /* if */
      }                                /* if */
    }                                  /* if */
  }

  /* initialize parameters */
  processParams(S, true);

  {
    uint8_T * mxMemUnitPtr;
    mwSize dataInSize = 0;
    XIL_IOBuffer_T * IOBufferPtr = (XIL_IOBuffer_T *) ssGetPWorkValue(S, 1);
    if (IOBufferPtr != NULL) {
      void * pXILService = (void *) ssGetPWorkValue(S, 9);
      if (pXILService != NULL) {
        if (xilHostAppSvcGrowIOBuffer(pXILService, IOBufferPtr, 5, 0)!=
            XILHOSTAPPSVC_SUCCESS) {
          return;
        }                              /* if */

        if (IOBufferPtr->data != NULL) {
          mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;

          /* write command id */
          *mxMemUnitPtr = 1;
          mxMemUnitPtr++;

          {
            uint8_T * simDataMemUnitPtr;
            uint32_T commandDataFcnid = 0;
            simDataMemUnitPtr = (uint8_T *) &commandDataFcnid;

            {
              size_t num_elements = 1;

              {
                copyIOData(mxMemUnitPtr, simDataMemUnitPtr, &mxMemUnitPtr,
                           num_elements, sizeof(uint32_T));
              }
            }
          }

          /* dispatch command to the target */
          if (commandDispatch(S, IOBufferPtr, 5)!=XILHOSTAPPSVC_SUCCESS) {
            return;
          }                            /* if */

          {
            XILCommandResponseType commandResponseType =
              XIL_COMMAND_NOT_COMPLETE;
            while (commandResponseType != XIL_STEP_COMPLETE) {
              /* receive command from the target */
              mwSize dataInSize = 0;
              if (commandResponse(S, &dataInSize, &commandResponseType) !=
                  XILHOSTAPPSVC_SUCCESS) {
                return;
              }                        /* if */

              if (dataInSize > 0) {
                size_t dataInMemUnitSize = dataInSize;
                uint8_T responseId = 0;
                uint8_T * mxMemUnitPtrEnd;
                mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;
                mxMemUnitPtrEnd = mxMemUnitPtr + dataInMemUnitSize - 1;
                while (mxMemUnitPtr <= mxMemUnitPtrEnd) {
                  /* read response id */
                  responseId = *mxMemUnitPtr;
                  mxMemUnitPtr++;
                  switch (responseId) {
                   case RESPONSE_ERROR:
                   case RESPONSE_PRINTF:
                   case RESPONSE_FOPEN:
                   case RESPONSE_FPRINTF:
                   case RESPONSE_SIGNAL_RAISED:
                    {
                      if (processErrorAndTargetIOResponseCases(S, responseId,
                           &mxMemUnitPtr)== XILHOSTAPPSVC_ERROR) {
                        return;
                      }                /* if */
                      break;
                    }

                   case RESPONSE_OUTPUT_DATA:
                    {
                      {
                        uint8_T * simDataMemUnitPtr;
                        simDataMemUnitPtr = ( uint8_T *) ssGetOutputPortSignal(S,
                          0);

                        {
                          size_t num_elements = 1;

                          {
                            copyIOData(simDataMemUnitPtr, mxMemUnitPtr,
                                       &mxMemUnitPtr, num_elements, sizeof
                                       (real32_T));
                          }
                        }
                      }

                      {
                        uint8_T * simDataMemUnitPtr;
                        simDataMemUnitPtr = ( uint8_T *) ssGetOutputPortSignal(S,
                          1);

                        {
                          size_t num_elements = 1;

                          {
                            copyIOData(simDataMemUnitPtr, mxMemUnitPtr,
                                       &mxMemUnitPtr, num_elements, sizeof
                                       (int32_T));
                          }
                        }
                      }
                      break;
                    }

                   default:
                    {
                      {
                        void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
                        mxArray * rhs[ 2 ];
                        rhs[0] = mxCreateString(
                          "PIL:pilverification:UnknownResponseId");
                        rhs[1] = mxCreateDoubleScalar(responseId);
                        xilUtilsHandleError(pXILUtils, 2 , rhs );
                        return;
                      }
                      break;
                    }
                  }                    /* switch */
                }                      /* while */
              }                        /* if */
            }                          /* while */
          }
        }                              /* if */
      }                                /* if */
    }                                  /* if */
  }
}

#endif                                 /* MDL_START */

#define MDL_PROCESS_PARAMETERS
#if defined(MDL_PROCESS_PARAMETERS)

static void mdlProcessParameters(SimStruct *S)
{
  processParams(S, false);
}

#endif                                 /* MDL_PROCESS_PARAMETERS */

#define MDL_SET_WORK_WIDTHS                                      /* Change to #undef to remove function */
#if defined(MDL_SET_WORK_WIDTHS)

static void mdlSetWorkWidths(SimStruct *S)
{
}

#endif                                 /* MDL_SET_WORK_WIDTHS */

static void mdlOutputs(SimStruct *S, int_T tid)
{
  /* Singlerate scheduling */
  /* check for sample time hit associated with task 1 */
  if (ssIsSampleHit(S, ssGetInputPortSampleTimeIndex(S, 0), tid)) {
    {
      uint8_T * mxMemUnitPtr;
      mwSize dataInSize = 0;
      XIL_IOBuffer_T * IOBufferPtr = (XIL_IOBuffer_T *) ssGetPWorkValue(S, 1);
      if (IOBufferPtr != NULL) {
        void * pXILService = (void *) ssGetPWorkValue(S, 9);
        if (pXILService != NULL) {
          if (xilHostAppSvcGrowIOBuffer(pXILService, IOBufferPtr, 25, 0)!=
              XILHOSTAPPSVC_SUCCESS) {
            return;
          }                            /* if */

          if (IOBufferPtr->data != NULL) {
            mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;

            /* write command id */
            *mxMemUnitPtr = 3;
            mxMemUnitPtr++;

            {
              uint8_T * simDataMemUnitPtr;
              uint32_T commandDataFcnidTID[2] = { 0, 1 };

              simDataMemUnitPtr = (uint8_T *) &commandDataFcnidTID[0];

              {
                size_t num_elements = 2;

                {
                  copyIOData(mxMemUnitPtr, simDataMemUnitPtr, &mxMemUnitPtr,
                             num_elements, sizeof(uint32_T));
                }
              }
            }

            {
              uint8_T * simDataMemUnitPtr;
              uint32_T offsetIdx;
              for (offsetIdx=0; offsetIdx< 4; offsetIdx++) {
                slDataTypeAccess * dta = ssGetDataTypeAccess(S);
                const char * bpath = ssGetPath(S);

                {
                  simDataMemUnitPtr = ( uint8_T *) ssGetInputPortSignal(S, 0);
                  simDataMemUnitPtr = (uint8_T*) (((char *) simDataMemUnitPtr) +
                    dtaGetDataTypeElementOffset(dta, bpath, ssGetDataTypeId(S,
                    "EngSensors"), offsetIdx));

                  {
                    DTypeId dType = ssGetDataTypeId(S, "EngSensors");
                    size_t num_elements = 1;
                    num_elements = getBusElementDimension(S, dType, offsetIdx);

                    {
                      copyIOData(mxMemUnitPtr, simDataMemUnitPtr, &mxMemUnitPtr,
                                 num_elements, ssGetDataTypeSize(S,
                                  ssGetBusElementDataType(S, dType, offsetIdx)));
                    }
                  }
                }
              }                        /* for */
            }

            /* dispatch command to the target */
            if (commandDispatch(S, IOBufferPtr, 25)!=XILHOSTAPPSVC_SUCCESS) {
              return;
            }                          /* if */

            {
              XILCommandResponseType commandResponseType =
                XIL_COMMAND_NOT_COMPLETE;
              while (commandResponseType != XIL_STEP_COMPLETE) {
                /* receive command from the target */
                mwSize dataInSize = 0;
                if (commandResponse(S, &dataInSize, &commandResponseType) !=
                    XILHOSTAPPSVC_SUCCESS) {
                  return;
                }                      /* if */

                if (dataInSize > 0) {
                  size_t dataInMemUnitSize = dataInSize;
                  uint8_T responseId = 0;
                  uint8_T * mxMemUnitPtrEnd;
                  mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;
                  mxMemUnitPtrEnd = mxMemUnitPtr + dataInMemUnitSize - 1;
                  while (mxMemUnitPtr <= mxMemUnitPtrEnd) {
                    /* read response id */
                    responseId = *mxMemUnitPtr;
                    mxMemUnitPtr++;
                    switch (responseId) {
                     case RESPONSE_ERROR:
                     case RESPONSE_PRINTF:
                     case RESPONSE_FOPEN:
                     case RESPONSE_FPRINTF:
                     case RESPONSE_SIGNAL_RAISED:
                      {
                        if (processErrorAndTargetIOResponseCases(S, responseId,
                             &mxMemUnitPtr)== XILHOSTAPPSVC_ERROR) {
                          return;
                        }              /* if */
                        break;
                      }

                     case RESPONSE_OUTPUT_DATA:
                      {
                        {
                          uint8_T * simDataMemUnitPtr;
                          simDataMemUnitPtr = ( uint8_T *) ssGetOutputPortSignal
                            (S, 0);

                          {
                            size_t num_elements = 1;

                            {
                              copyIOData(simDataMemUnitPtr, mxMemUnitPtr,
                                         &mxMemUnitPtr, num_elements, sizeof
                                         (real32_T));
                            }
                          }
                        }

                        {
                          uint8_T * simDataMemUnitPtr;
                          simDataMemUnitPtr = ( uint8_T *) ssGetOutputPortSignal
                            (S, 1);

                          {
                            size_t num_elements = 1;

                            {
                              copyIOData(simDataMemUnitPtr, mxMemUnitPtr,
                                         &mxMemUnitPtr, num_elements, sizeof
                                         (int32_T));
                            }
                          }
                        }
                        break;
                      }

                     default:
                      {
                        {
                          void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
                          mxArray * rhs[ 2 ];
                          rhs[0] = mxCreateString(
                            "PIL:pilverification:UnknownResponseId");
                          rhs[1] = mxCreateDoubleScalar(responseId);
                          xilUtilsHandleError(pXILUtils, 2 , rhs );
                          return;
                        }
                        break;
                      }
                    }                  /* switch */
                  }                    /* while */
                }                      /* if */
              }                        /* while */
            }
          }                            /* if */
        }                              /* if */
      }                                /* if */
    }
  }                                    /* if */
}

#define MDL_UPDATE
#if defined(MDL_UPDATE)

static void mdlUpdate(SimStruct *S, int_T tid)
{
  /* Singlerate scheduling */
  /* check for sample time hit associated with task 1 */
  if (ssIsSampleHit(S, ssGetInputPortSampleTimeIndex(S, 0), tid)) {
    {
      uint8_T * mxMemUnitPtr;
      mwSize dataInSize = 0;
      XIL_IOBuffer_T * IOBufferPtr = (XIL_IOBuffer_T *) ssGetPWorkValue(S, 1);
      if (IOBufferPtr != NULL) {
        void * pXILService = (void *) ssGetPWorkValue(S, 9);
        if (pXILService != NULL) {
          if (xilHostAppSvcGrowIOBuffer(pXILService, IOBufferPtr, 9, 0)!=
              XILHOSTAPPSVC_SUCCESS) {
            return;
          }                            /* if */

          if (IOBufferPtr->data != NULL) {
            mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;

            /* write command id */
            *mxMemUnitPtr = 11;
            mxMemUnitPtr++;

            {
              uint8_T * simDataMemUnitPtr;
              uint32_T commandDataFcnidTID[2] = { 0, 1 };

              simDataMemUnitPtr = (uint8_T *) &commandDataFcnidTID[0];

              {
                size_t num_elements = 2;

                {
                  copyIOData(mxMemUnitPtr, simDataMemUnitPtr, &mxMemUnitPtr,
                             num_elements, sizeof(uint32_T));
                }
              }
            }

            /* dispatch command to the target */
            if (commandDispatch(S, IOBufferPtr, 9)!=XILHOSTAPPSVC_SUCCESS) {
              return;
            }                          /* if */

            {
              XILCommandResponseType commandResponseType =
                XIL_COMMAND_NOT_COMPLETE;
              while (commandResponseType != XIL_STEP_COMPLETE) {
                /* receive command from the target */
                mwSize dataInSize = 0;
                if (commandResponse(S, &dataInSize, &commandResponseType) !=
                    XILHOSTAPPSVC_SUCCESS) {
                  return;
                }                      /* if */

                if (dataInSize > 0) {
                  size_t dataInMemUnitSize = dataInSize;
                  uint8_T responseId = 0;
                  uint8_T * mxMemUnitPtrEnd;
                  mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;
                  mxMemUnitPtrEnd = mxMemUnitPtr + dataInMemUnitSize - 1;
                  while (mxMemUnitPtr <= mxMemUnitPtrEnd) {
                    /* read response id */
                    responseId = *mxMemUnitPtr;
                    mxMemUnitPtr++;
                    switch (responseId) {
                     case RESPONSE_ERROR:
                     case RESPONSE_PRINTF:
                     case RESPONSE_FOPEN:
                     case RESPONSE_FPRINTF:
                     case RESPONSE_SIGNAL_RAISED:
                      {
                        if (processErrorAndTargetIOResponseCases(S, responseId,
                             &mxMemUnitPtr)== XILHOSTAPPSVC_ERROR) {
                          return;
                        }              /* if */
                        break;
                      }

                     default:
                      {
                        {
                          void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
                          mxArray * rhs[ 2 ];
                          rhs[0] = mxCreateString(
                            "PIL:pilverification:UnknownResponseId");
                          rhs[1] = mxCreateDoubleScalar(responseId);
                          xilUtilsHandleError(pXILUtils, 2 , rhs );
                          return;
                        }
                        break;
                      }
                    }                  /* switch */
                  }                    /* while */
                }                      /* if */
              }                        /* while */
            }
          }                            /* if */
        }                              /* if */
      }                                /* if */
    }
  }                                    /* if */
}

#endif

static void mdlTerminate(SimStruct *S)
{
  int commErrorOccurred = 0;
  int isXILApplicationStarted = 0;

  {
    if (ssGetPWork(S) != NULL) {
      int * pCommErrorOccurred = (int *) ssGetPWorkValue(S, 4);
      int * pIsXILApplicationStarted = (int *) ssGetPWorkValue(S, 5);
      if (pCommErrorOccurred != NULL) {
        commErrorOccurred = *pCommErrorOccurred;
      }                                /* if */

      if (pIsXILApplicationStarted != NULL) {
        isXILApplicationStarted = *pIsXILApplicationStarted;
      }                                /* if */
    }                                  /* if */
  }

  if (isXILApplicationStarted) {
    if (!commErrorOccurred) {
      {
        uint8_T * mxMemUnitPtr;
        mwSize dataInSize = 0;
        XIL_IOBuffer_T * IOBufferPtr = (XIL_IOBuffer_T *) ssGetPWorkValue(S, 1);
        if (IOBufferPtr != NULL) {
          void * pXILService = (void *) ssGetPWorkValue(S, 9);
          if (pXILService != NULL) {
            if (xilHostAppSvcGrowIOBuffer(pXILService, IOBufferPtr, 5, 0)!=
                XILHOSTAPPSVC_SUCCESS) {
              callStopHookAndFreeSFcnMemory(S);
              return;
            }                          /* if */

            if (IOBufferPtr->data != NULL) {
              mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;

              /* write command id */
              *mxMemUnitPtr = 4;
              mxMemUnitPtr++;

              {
                uint8_T * simDataMemUnitPtr;
                uint32_T commandDataFcnid = 0;
                simDataMemUnitPtr = (uint8_T *) &commandDataFcnid;

                {
                  size_t num_elements = 1;

                  {
                    copyIOData(mxMemUnitPtr, simDataMemUnitPtr, &mxMemUnitPtr,
                               num_elements, sizeof(uint32_T));
                  }
                }
              }

              /* dispatch command to the target */
              if (commandDispatch(S, IOBufferPtr, 5)!=XILHOSTAPPSVC_SUCCESS) {
                callStopHookAndFreeSFcnMemory(S);
                return;
              }                        /* if */

              {
                XILCommandResponseType commandResponseType =
                  XIL_COMMAND_NOT_COMPLETE;
                while (commandResponseType != XIL_STEP_COMPLETE) {
                  /* receive command from the target */
                  mwSize dataInSize = 0;
                  if (commandResponse(S, &dataInSize, &commandResponseType) !=
                      XILHOSTAPPSVC_SUCCESS) {
                    callStopHookAndFreeSFcnMemory(S);
                    return;
                  }                    /* if */

                  if (dataInSize > 0) {
                    size_t dataInMemUnitSize = dataInSize;
                    uint8_T responseId = 0;
                    uint8_T * mxMemUnitPtrEnd;
                    mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;
                    mxMemUnitPtrEnd = mxMemUnitPtr + dataInMemUnitSize - 1;
                    while (mxMemUnitPtr <= mxMemUnitPtrEnd) {
                      /* read response id */
                      responseId = *mxMemUnitPtr;
                      mxMemUnitPtr++;
                      switch (responseId) {
                       case RESPONSE_ERROR:
                       case RESPONSE_PRINTF:
                       case RESPONSE_FOPEN:
                       case RESPONSE_FPRINTF:
                       case RESPONSE_SIGNAL_RAISED:
                        {
                          if (processErrorAndTargetIOResponseCases(S, responseId,
                               &mxMemUnitPtr)== XILHOSTAPPSVC_ERROR) {
                            callStopHookAndFreeSFcnMemory(S);
                            return;
                          }            /* if */
                          break;
                        }

                       default:
                        {
                          {
                            void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
                            mxArray * rhs[ 2 ];
                            rhs[0] = mxCreateString(
                              "PIL:pilverification:UnknownResponseId");
                            rhs[1] = mxCreateDoubleScalar(responseId);
                            xilUtilsHandleError(pXILUtils, 2 , rhs );
                            callStopHookAndFreeSFcnMemory(S);
                            return;
                          }
                          break;
                        }
                      }                /* switch */
                    }                  /* while */
                  }                    /* if */
                }                      /* while */
              }
            }                          /* if */
          }                            /* if */
        }                              /* if */
      }

      {
        uint8_T * mxMemUnitPtr;
        mwSize dataInSize = 0;
        XIL_IOBuffer_T * IOBufferPtr = (XIL_IOBuffer_T *) ssGetPWorkValue(S, 1);
        if (IOBufferPtr != NULL) {
          void * pXILService = (void *) ssGetPWorkValue(S, 9);
          if (pXILService != NULL) {
            if (xilHostAppSvcGrowIOBuffer(pXILService, IOBufferPtr, 1, 0)!=
                XILHOSTAPPSVC_SUCCESS) {
              callStopHookAndFreeSFcnMemory(S);
              return;
            }                          /* if */

            if (IOBufferPtr->data != NULL) {
              mxMemUnitPtr = (uint8_T *) IOBufferPtr->data;

              /* write command id */
              *mxMemUnitPtr = 10;
              mxMemUnitPtr++;

              /* dispatch command to the target */
              if (commandDispatch(S, IOBufferPtr, 1)!=XILHOSTAPPSVC_SUCCESS) {
                callStopHookAndFreeSFcnMemory(S);
                return;
              }                        /* if */
            }                          /* if */
          }                            /* if */
        }                              /* if */
      }
    }                                  /* if */

    callStopHookAndFreeSFcnMemory(S);
  }                                    /* if */
}

#define MDL_FINALIZE                                             /* Change to #undef to remove function */
#if defined(MDL_FINALIZE)

static void mdlFinalize(SimStruct *S)
{
  if (ssGetPWork(S) != NULL) {
    int callMdlTerminate = 0;

    {
      void * pXILUtils = (void *) ssGetPWorkValue(S, 6);
      if (pXILUtils) {
        mxArray *rhs[1];
        mxArray *lhs[1];
        rhs[0] = mxCreateString(ssGetPath(ssGetRootSS(S)));
        if (xilUtilsCallMATLAB(pXILUtils, 1, lhs, 1, rhs,
                               "rtw.pil.SILPILInterface.sfunctionIsFastRestartEnabled")
            !=XIL_UTILS_SUCCESS) {
          callMdlTerminate = 1;
        } else {
          callMdlTerminate = (int) (mxGetLogicals(lhs[0])[0]);
        }                              /* if */

        mxDestroyArray(lhs[0]);
      }                                /* if */
    }

    if (callMdlTerminate) {
      mdlTerminate(S);
    }                                  /* if */
  }                                    /* if */
}

#endif                                 /* MDL_FINALIZE */

#define MDL_ENABLE
#if defined(MDL_ENABLE)

static void mdlEnable(SimStruct *S)
{
}

#endif                                 /* MDL_ENABLE */

#define MDL_DISABLE
#if defined(MDL_DISABLE)

static void mdlDisable(SimStruct *S)
{
}

#endif                                 /* MDL_DISABLE */

/* Required S-function trailer */
#ifdef MATLAB_MEX_FILE                 /* Is this file being compiled as a MEX-file? */
#include "simulink.c"                  /* MEX-file interface mechanism */
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
