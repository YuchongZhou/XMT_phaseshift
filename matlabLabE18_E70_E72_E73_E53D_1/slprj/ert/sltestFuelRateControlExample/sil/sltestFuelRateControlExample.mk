###########################################################################
## Makefile generated for Simulink model 'sltestFuelRateControlExample'. 
## 
## Makefile     : sltestFuelRateControlExample.mk
## Generated on : Wed Dec 06 15:19:59 2017
## MATLAB Coder version: 3.1 (R2016a)
## 
## Build Info:
## 
## Final product: sltestFuelRateControlExample.exe
## Product type : executable
## Build type   : Top-Level Standalone Executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPUTER                Computer type. See the MATLAB "computer" command.
# MODELREF_LINK_RSPFILE   Include paths for the model reference build
# PERL                    PERL Tool
# GEN_LNK_SCRIPT          Perl script to generate the command file
# CMD_FILE                Command file
# GEN_COMIPLER_RSP        Script to generate response file for compiler

PRODUCT_NAME              = sltestFuelRateControlExample
MAKEFILE                  = sltestFuelRateControlExample.mk
COMPUTER                  = PCWIN64
MATLAB_ROOT               = C:\PROGRA~1\MATLAB\R2016a
MATLAB_BIN                = C:\PROGRA~1\MATLAB\R2016a\bin
MATLAB_ARCH_BIN           = C:\PROGRA~1\MATLAB\R2016a\bin\win64
MASTER_ANCHOR_DIR         = 
START_DIR                 = J:\matlabLabE18_E70_E72_E73
ARCH                      = win64
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = None
MODELREF_LINK_RSPFILE_NAME = sltestFuelRateControlExample_ref.rsp
RELATIVE_PATH_TO_ANCHOR   = hostobj\..\..\..\..\..
MODELREF_LINK_RSPFILE     = sltestFuelRateControlExample_ref.rsp
PERL                      = $(MATLAB_ROOT)\sys\perl\win32\bin\perl.exe
GEN_LNK_SCRIPT            = $(MATLAB_ROOT)\rtw\c\tools\mkvc_lnk.pl
CMD_FILE                  = $(PRODUCT_NAME).lnk
NODEBUG                   = 1
SHARED_SRC_DIR            = hostobj\..\..\..\..\..\slprj\ert\_sharedutils
SHARED_SRC                = $(SHARED_SRC_DIR)\*.c
SHARED_BIN_DIR            = hostobj\..\..\..\..\..\slprj\ert\_sharedutils\sil\hostobj
SHARED_LIB                = $(SHARED_BIN_DIR)\rtwshared.lib
GEN_COMIPLER_RSP          = $(MATLAB_ROOT)\rtw\c\tools\mkvc_rsp.pl

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Microsoft Visual C++ 2010 v10.0 | nmake (64-bit Windows)
# Supported Version(s):    10.0
# ToolchainInfo Version:   R2016a
# Specification Revision:  1.0
# 

!include <ntwin32.mak>


#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# NODEBUG
# cvarsdll
# cvarsmt
# conlibsmt
# ldebug
# conflags
# cflags

#-----------
# MACROS
#-----------

MEX_OPTS_FILE       = $(MATLAB_ROOT)\bin\$(ARCH)\mexopts\msvc100opts.bat
MW_EXTERNLIB_DIR    = $(MATLAB_ROOT)\extern\lib\win64\microsoft
MW_LIB_DIR          = $(MATLAB_ROOT)\lib\win64
MEX_ARCH            = -win64
CPU                 = AMD64
APPVER              = 5.02
CVARSFLAG           = $(cvarsmt)
CFLAGS_ADDITIONAL   = -D_CRT_SECURE_NO_WARNINGS
CPPFLAGS_ADDITIONAL = -EHs -D_CRT_SECURE_NO_WARNINGS
LIBS_TOOLCHAIN      = $(conlibs)

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: Microsoft Visual C Compiler
CC = cl

# Linker: Microsoft Visual C Linker
LD = link

# C++ Compiler: Microsoft Visual C++ Compiler
CPP = cl

# C++ Linker: Microsoft Visual C++ Linker
CPP_LD = link

# Archiver: Microsoft Visual C/C++ Archiver
AR = lib

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_BIN)
MEX = $(MEX_PATH)\mex

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: NMAKE Utility
MAKE = nmake


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -Zi
C_OUTPUT_FLAG       = -Fo
LDDEBUG             = /DEBUG
OUTPUT_FLAG         = -out:
CPPDEBUG            = -Zi
CPP_OUTPUT_FLAG     = -Fo
CPPLDDEBUG          = /DEBUG
OUTPUT_FLAG         = -out:
ARDEBUG             =
STATICLIB_OUTPUT_FLAG = -out:
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @ren
RUN                 = @cmd /C

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = /nologo
CFLAGS               = $(cflags) $(CVARSFLAG) $(CFLAGS_ADDITIONAL) \
                       /Od /Oy-
CPPFLAGS             = /TP $(cflags) $(CVARSFLAG) $(CPPFLAGS_ADDITIONAL) \
                       /Od /Oy-
CPP_LDFLAGS          = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
CPP_SHAREDLIB_LDFLAGS  = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                         -dll -def:$(DEF_FILE)
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN)
MEX_CFLAGS           = $(MEX_ARCH) OPTIMFLAGS="/Od /Oy- $(MDFLAG) $(DEFINES)" $(MEX_OPTS_FLAG)
MEX_LDFLAGS          = LDFLAGS=='$$LDFLAGS'
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = $(ldebug) $(conflags) $(LIBS_TOOLCHAIN) \
                       -dll -def:$(DEF_FILE)

#--------------------
# File extensions
#--------------------

H_EXT               = .h
OBJ_EXT             = .obj
C_EXT               = .c
EXE_EXT             = .exe
SHAREDLIB_EXT       = .dll
HPP_EXT             = .hpp
OBJ_EXT             = .obj
CPP_EXT             = .cpp
EXE_EXT             = .exe
SHAREDLIB_EXT       = .dll
STATICLIB_EXT       = .lib
MEX_EXT             = .mexw64
MAKE_EXT            = .mk


###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = sltestFuelRateControlExample.exe
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = $(MATLAB_ROOT)\simulink\include\sf_runtime;$(START_DIR)\slprj\ert\sltestFuelRateControlExample;$(START_DIR);$(MATLAB_ROOT)\toolbox\simulinktest\simulinktestdemos;$(MATLAB_ROOT)\extern\include;$(MATLAB_ROOT)\simulink\include;$(MATLAB_ROOT)\rtw\c\src;$(MATLAB_ROOT)\rtw\c\src\ext_mode\common;$(MATLAB_ROOT)\rtw\c\ert;$(START_DIR)\slprj\ert\_sharedutils;$(MATLAB_ROOT)\toolbox\rtw\targets\pil\c;$(START_DIR)\slprj\ert\sltestFuelRateControlExample\sil;$(MATLAB_ROOT)\extern\include\coder\connectivity\XILTgtAppSvc;$(MATLAB_ROOT)\toolbox\coder\rtiostream\src\utils;$(MATLAB_ROOT)\extern\include\coder\connectivity\CoderAssumpTgtAppSvc

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -DSLMSG_ALLOW_SYSTEM_ALLOC -DMODEL=sltestFuelRateControlExample -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO -DONESTEPFCN=0 -DTERMFCN=0 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTID01EQ=0 -DPORTABLE_WORDSIZES -DXIL_SIGNAL_HANDLER=1 -DCA_CHECK_LONG_LONG_ENABLED=1 -DCA_CHECK_FLOATING_POINT_ENABLED=1 -DCODER_ASSUMPTIONS_ENABLED=1 -DRTIOSTREAM_RX_BUFFER_BYTE_SIZE=50000 -DRTIOSTREAM_TX_BUFFER_BYTE_SIZE=50000 -DMEM_UNIT_BYTES=1 -DMemUnit_T=uint8_T
DEFINES_BUILD_ARGS = -DONESTEPFCN=0 -DTERMFCN=0 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0 -DMT=0 -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0
DEFINES_IMPLIED = -DTID01EQ=0
DEFINES_OPTS = -DSLMSG_ALLOW_SYSTEM_ALLOC -DXIL_SIGNAL_HANDLER=1 -DCA_CHECK_LONG_LONG_ENABLED=1 -DCA_CHECK_FLOATING_POINT_ENABLED=1 -DCODER_ASSUMPTIONS_ENABLED=1 -DRTIOSTREAM_RX_BUFFER_BYTE_SIZE=50000 -DRTIOSTREAM_TX_BUFFER_BYTE_SIZE=50000 -DMEM_UNIT_BYTES=1 -DMemUnit_T=uint8_T
DEFINES_STANDARD = -DMODEL=sltestFuelRateControlExample -DNUMST=1 -DNCSTATES=0 -DHAVESTDIO

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_IMPLIED) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(MATLAB_ROOT)\toolbox\rtw\targets\pil\c\xil_interface_lib.c $(MATLAB_ROOT)\toolbox\rtw\targets\pil\c\xil_data_stream.c $(MATLAB_ROOT)\toolbox\rtw\targets\pil\c\xil_services.c $(START_DIR)\slprj\ert\sltestFuelRateControlExample\sil\xil_interface.c $(MATLAB_ROOT)\toolbox\rtw\targets\pil\c\xilcomms_rtiostream.c $(MATLAB_ROOT)\toolbox\rtw\targets\pil\c\xil_rtiostream.c $(MATLAB_ROOT)\toolbox\coder\rtiostream\src\utils\rtiostream_utils.c $(MATLAB_ROOT)\toolbox\rtw\targets\pil\c\coder_assumptions_app.c $(MATLAB_ROOT)\toolbox\rtw\targets\pil\c\coder_assumptions_data_stream.c $(MATLAB_ROOT)\toolbox\rtw\targets\pil\c\coder_assumptions_hwimpl.c $(START_DIR)\slprj\ert\sltestFuelRateControlExample\sil\sltestFuelRateControlExample_ca.c $(MATLAB_ROOT)\toolbox\rtw\targets\pil\c\coder_assumptions_rtiostream.c $(MATLAB_ROOT)\toolbox\rtw\targets\pil\c\sil_main.c $(MATLAB_ROOT)\toolbox\rtw\targets\pil\c\target_io.c $(MATLAB_ROOT)\rtw\c\src\rtiostream\rtiostreamtcpip\rtiostream_tcpip.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = xil_interface_lib.obj xil_data_stream.obj xil_services.obj xil_interface.obj xilcomms_rtiostream.obj xil_rtiostream.obj rtiostream_utils.obj coder_assumptions_app.obj coder_assumptions_data_stream.obj coder_assumptions_hwimpl.obj sltestFuelRateControlExample_ca.obj coder_assumptions_rtiostream.obj sil_main.obj target_io.obj rtiostream_tcpip.obj

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

MODELREF_LIBS = $(START_DIR)\slprj\ert\sltestFuelRateControlExample\sil\hostobj\sltestFuelRateControlExample_rtwlib.lib

LIBS = hostobj\..\..\..\..\..\slprj\ert\_sharedutils\sil\hostobj\rtwshared.lib

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_BASIC = $(DEFINES) 

CFLAGS = $(CFLAGS) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_BASIC = $(DEFINES) 

CPPFLAGS = $(CPPFLAGS) $(CPPFLAGS_BASIC)

###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild download execute set_environment_variables


all : build
	@cmd /C "@echo ### Successfully generated all binary outputs."


build : set_environment_variables prebuild $(PRODUCT)


buildobj : set_environment_variables prebuild $(OBJS) $(PREBUILT_OBJS) $(MODELREF_LIBS) $(LIBS)
	@cmd /C "@echo ### Successfully generated all binary outputs."


prebuild : 


download : build


execute : download
	@cmd /C "@echo ### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@cmd /C "@echo ### Done invoking postbuild tool."


set_environment_variables : 
	@set INCLUDE=$(INCLUDES);$(INCLUDE)
	@set LIB=$(LIB)


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(MODELREF_LIBS) $(LIBS)
	$(PERL) $(GEN_LNK_SCRIPT) $(CMD_FILE) $(OBJS)
	@cmd /C "@echo ### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) -out:$(PRODUCT) @$(CMD_FILE) @$(MODELREF_LINK_RSPFILE) $(LIBS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@cmd /C "@echo ### Created: $(PRODUCT)"
	$(RM) $(CMD_FILE)


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\rtw\targets\pil\c}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\rtw\targets\pil\c}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\coder\rtiostream\src\utils}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\toolbox\coder\rtiostream\src\utils}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\rtw\c\src\rtiostream\rtiostreamtcpip}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(MATLAB_ROOT)\rtw\c\src\rtiostream\rtiostreamtcpip}.cpp.obj :
	$(CPP) $(CPPFLAGS) -Fo"$@" "$<"


{$(START_DIR)\slprj\ert\sltestFuelRateControlExample\sil}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


{$(START_DIR)\slprj\ert\sltestFuelRateControlExample\sil}.c.obj :
	$(CC) $(CFLAGS) -Fo"$@" "$<"


#---------------------------
# SHARED UTILITY LIBRARY
#---------------------------

$(SHARED_LIB) : $(SHARED_SRC)
	$(PERL) $(GEN_COMIPLER_RSP) hostobj\..\..\..\..\..\slprj\ert\_sharedutils\sil\hostobj\rtwshared.rsp $? 
	@cmd /C "@echo ### Compiling shared utility files ..."
	$(CC) $(CFLAGS) -Fo$(SHARED_BIN_DIR)\ @hostobj\..\..\..\..\..\slprj\ert\_sharedutils\sil\hostobj\rtwshared.rsp
	@cmd /C "@echo ### Creating shared utilities library "$(SHARED_LIB)" ..."
	$(AR) $(ARFLAGS) -out:$(SHARED_LIB) $(SHARED_BIN_DIR)\*.obj
	@cmd /C "@echo ### Created: $(SHARED_LIB)"
	$(RM) hostobj\..\..\..\..\..\slprj\ert\_sharedutils\sil\hostobj\rtwshared.rsp 


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : $(MAKEFILE) rtw_proj.tmw


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@cmd /C "@echo ### PRODUCT = $(PRODUCT)"
	@cmd /C "@echo ### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@cmd /C "@echo ### BUILD_TYPE = $(BUILD_TYPE)"
	@cmd /C "@echo ### INCLUDES = $(INCLUDES)"
	@cmd /C "@echo ### DEFINES = $(DEFINES)"
	@cmd /C "@echo ### ALL_SRCS = $(ALL_SRCS)"
	@cmd /C "@echo ### ALL_OBJS = $(ALL_OBJS)"
	@cmd /C "@echo ### LIBS = $(LIBS)"
	@cmd /C "@echo ### MODELREF_LIBS = $(MODELREF_LIBS)"
	@cmd /C "@echo ### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@cmd /C "@echo ### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@cmd /C "@echo ### CFLAGS = $(CFLAGS)"
	@cmd /C "@echo ### LDFLAGS = $(LDFLAGS)"
	@cmd /C "@echo ### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### CPPFLAGS = $(CPPFLAGS)"
	@cmd /C "@echo ### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@cmd /C "@echo ### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@cmd /C "@echo ### ARFLAGS = $(ARFLAGS)"
	@cmd /C "@echo ### MEX_CFLAGS = $(MEX_CFLAGS)"
	@cmd /C "@echo ### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@cmd /C "@echo ### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@cmd /C "@echo ### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@cmd /C "@echo ### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	@if exist $(PRODUCT) $(RM) $(PRODUCT)
	$(RM) $(ALL_OBJS)
	$(ECHO) "### Deleted all derived files."


