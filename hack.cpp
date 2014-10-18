#include <stdlib.h>

int __hxcpp_irand(int inMax)
{
   unsigned int lo = rand() & 0xfff;
   unsigned int mid = rand() & 0xfff;
   unsigned int hi = rand() & 0xff;
   return (lo | (mid<<12) | (hi<<24) ) % inMax;
}
