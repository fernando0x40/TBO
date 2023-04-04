#include "item.h"
#include <stdlib.h>

void sort(Item *a, int lo, int hi){
  int upper_limit = hi;
  int lower_limit = lo;
  int exch_count = 1;
  while (exch_count != 0)
  {
    exch_count = 0;
    for (size_t i = lower_limit; i < upper_limit; i++)
    {
      if (less(a[i], a[i+1]))
      {
        exch(a[i], a[i+1]);
        exch_count++;
      }
    }
    lower_limit++;
    if (!exch_count) break;
    for (size_t j = upper_limit; j > lower_limit; j--)
    {
      if (less(a[j], a[j-1]))
      {
        exch(a[j], a[j-1]);
        exch_count++;
      }
    }
    upper_limit--;
  }
      
}