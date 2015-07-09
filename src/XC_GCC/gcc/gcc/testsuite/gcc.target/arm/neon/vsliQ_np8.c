/* Test the `vsliQ_np8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vsliQ_np8 (void)
{
  poly8x16_t out_poly8x16_t;
  poly8x16_t arg0_poly8x16_t;
  poly8x16_t arg1_poly8x16_t;

  out_poly8x16_t = vsliq_n_p8 (arg0_poly8x16_t, arg1_poly8x16_t, 1);
}

/* { dg-final { scan-assembler "vsli\.8\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+, #\[0-9\]+!?\(\[ 	\]+@.*\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */