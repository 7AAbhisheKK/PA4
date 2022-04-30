/**************************************************************************\
*                                                                          *
*   Run BigCrush test                                                      *
*                                                                          *
\**************************************************************************/

#include "middlesquareweyl.h"
#include "middlesquare.h"
#include <stdio.h>
#include "unif01.h"
#include "bbattery.h"
 
int main (void) {
   unif01_Gen *gen;
   gen = unif01_CreateExternGenBits ("middleSquareWeyl", middlesquareweyl);
   // gen = unif01_CreateExternGenBits ("middlequare", middlesquare);

   bbattery_SmallCrush(gen);

   unif01_DeleteExternGenBits (gen);

   return 0;

}
