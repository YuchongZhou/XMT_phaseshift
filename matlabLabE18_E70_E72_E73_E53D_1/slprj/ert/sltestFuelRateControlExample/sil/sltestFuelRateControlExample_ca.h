/*
 * File: sltestFuelRateControlExample_ca.h
 *
 * Abstract: Tests assumptions in the generated code.
 */

#ifndef SLTESTFUELRATECONTROLEXAMPLE_CA_H
#define SLTESTFUELRATECONTROLEXAMPLE_CA_H

/* preprocessor validation checks */
#include "sltestFuelRateControlExample_ca_preproc.h"
#include "coder_assumptions_hwimpl.h"

/* variables holding test results */
extern CA_HWImpl_TestResults CA_sltestFuelRateControlExample_HWRes;
extern CA_PWS_TestResults CA_sltestFuelRateControlExample_PWSRes;

/* variables holding "expected" and "actual" hardware implementation */
extern const CA_HWImpl CA_sltestFuelRateControlExample_ExpHW;
extern CA_HWImpl CA_sltestFuelRateControlExample_ActHW;

/* entry point function to run tests */
void sltestFuelRateControlExample_caRunTests(void);

#endif                                 /* SLTESTFUELRATECONTROLEXAMPLE_CA_H */
