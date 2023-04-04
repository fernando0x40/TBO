#include "item.h"
#include <stdlib.h>

void sort(Item *a, int lo, int hi){
  for (size_t i = lo; i < hi; i++)
  {
    unsigned int lower_number_index = i;
    for (size_t j = i+1; j <= hi; j++)
      if (less(a[j], a[lower_number_index])) 
        lower_number_index = j;
    exch(a[i], a[lower_number_index]);
  } 
}