/*
 * File: sltestFuelRateControlExample_ca.c
 *
 * Abstract: Tests assumptions in the generated code.
 */

#include "sltestFuelRateControlExample_ca.h"

CA_HWImpl_TestResults CA_sltestFuelRateControlExample_HWRes;
CA_PWS_TestResults CA_sltestFuelRateControlExample_PWSRes;
const CA_HWImpl CA_sltestFuelRateControlExample_ExpHW = {
  8,                                   /* BitPerChar */
  16,                                  /* BitPerShort */
  32,                                  /* BitPerInt */
  32,                                  /* BitPerLong */
  64,                                  /* BitPerLongLong */
  32,                                  /* BitPerFloat */
  64,                                  /* BitPerDouble */
  32,                                  /* BitPerPointer */
  CA_LITTLE_ENDIAN,                    /* Endianess */
  CA_ZERO,                             /* IntDivRoundTo */
  1,                                   /* ShiftRightIntArith */
  1,                                   /* LongLongMode */
  1,                                   /* PortableWordSizes */
  "Specified"                          /* HWDeviceType */
};

CA_HWImpl CA_sltestFuelRateControlExample_ActHW;
void sltestFuelRateControlExample_caRunTests(void)
{
  /* verify hardware implementation */
  caVerifyPortableWordSizes(&CA_sltestFuelRateControlExample_ActHW,
    &CA_sltestFuelRateControlExample_ExpHW,
    &CA_sltestFuelRateControlExample_PWSRes);
  if (!CA_sltestFuelRateControlExample_ActHW.portableWordSizes) {
    caVerifyHWImpl(&CA_sltestFuelRateControlExample_ActHW,
                   &CA_sltestFuelRateControlExample_ExpHW,
                   &CA_sltestFuelRateControlExample_HWRes);
  }                                    /* if */
}
