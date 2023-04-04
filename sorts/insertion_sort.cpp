#include "item.h"
#include <stdlib.h>

void sort(Item *a, int lo, int hi){
  for (size_t i = lo+1; i <= hi; i++)
    for (size_t j = i; j > lo && less(a[j], a[j-1]); j--)
      exch(a[j], a[j-1]);
}