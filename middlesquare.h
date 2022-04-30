#include <stdint.h>
uint32_t number = 8459; uint32_t digit = 3;
int a[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000 };
inline static uint32_t middlesquare() {

   uint32_t sqn = number * number, next_number = 0;
   uint32_t t = (digit / 2);
   sqn = sqn / a[t];
   for (int i = 0; i < digit; i++) {
      next_number += (sqn % (a[t])) * (a[i]);
      sqn = sqn / 10;
   }
   return next_number;

}