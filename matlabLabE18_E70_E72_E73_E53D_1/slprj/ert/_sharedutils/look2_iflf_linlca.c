/*
 * File: look2_iflf_linlca.c
 *
 * Code generated for Simulink model 'sltestFuelRateControlExample'.
 *
 * Model version                  : 1.651
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Wed Dec 06 15:19:37 2017
 */

#include "rtwtypes.h"
#include "look2_iflf_linlca.h"

real32_T look2_iflf_linlca(real32_T u0, real32_T u1, const real32_T bp0[], const
  real32_T bp1[], const real32_T table[], const uint32_T maxIndex[], uint32_T
  stride)
{
  real32_T y;
  real32_T frac;
  uint32_T bpIndices[2];
  real32_T fractions[2];
  real32_T yR_1d;
  uint32_T offset_1d;
  uint32_T bpIdx;

  /* Lookup 2-D
     Search method: 'linear'
     Use previous index: 'off'
     Interpolation method: 'Linear'
     Extrapolation method: 'Clip'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'linear'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    bpIdx = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex[0U]]) {
    /* Linear Search */
    for (bpIdx = (uint32_T)(maxIndex[0U] >> 1U); u0 < bp0[bpIdx]; bpIdx--) {
    }

    while (u0 >= bp0[(uint32_T)(bpIdx + 1U)]) {
      bpIdx++;
    }

    frac = (u0 - bp0[bpIdx]) / (bp0[(uint32_T)(bpIdx + 1U)] - bp0[bpIdx]);
  } else {
    bpIdx = maxIndex[0U];
    frac = 0.0F;
  }

  fractions[0U] = frac;
  bpIndices[0U] = bpIdx;

  /* Prelookup - Index and Fraction
     Index Search method: 'linear'
     Extrapolation method: 'Clip'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u1 <= bp1[0U]) {
    bpIdx = 0U;
    frac = 0.0F;
  } else if (u1 < bp1[maxIndex[1U]]) {
    /* Linear Search */
    for (bpIdx = (uint32_T)(maxIndex[1U] >> 1U); u1 < bp1[bpIdx]; bpIdx--) {
    }

    while (u1 >= bp1[(uint32_T)(bpIdx + 1U)]) {
      bpIdx++;
    }

    frac = (u1 - bp1[bpIdx]) / (bp1[(uint32_T)(bpIdx + 1U)] - bp1[bpIdx]);
  } else {
    bpIdx = maxIndex[1U];
    frac = 0.0F;
  }

  /* Interpolation 2-D
     Interpolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'on'
     Overflow mode: 'wrapping'
   */
  offset_1d = (uint32_T)((uint32_T)(bpIdx * stride) + bpIndices[0U]);
  if (bpIndices[0U] == maxIndex[0U]) {
    y = table[offset_1d];
  } else {
    y = (table[(uint32_T)(offset_1d + 1U)] - table[offset_1d]) * fractions[0U] +
      table[offset_1d];
  }

  if (bpIdx == maxIndex[1U]) {
  } else {
    bpIdx = (uint32_T)(offset_1d + stride);
    if (bpIndices[0U] == maxIndex[0U]) {
      yR_1d = table[bpIdx];
    } else {
      yR_1d = (table[(uint32_T)(bpIdx + 1U)] - table[bpIdx]) * fractions[0U] +
        table[bpIdx];
    }

    y += (yR_1d - y) * frac;
  }

  return y;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
