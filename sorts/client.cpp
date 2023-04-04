#include "item.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

extern void sort(Item *a, int lo, int hi);
void printArray(Item* number_array, unsigned int size);

int main(int argc, char const *argv[])
{
  printf("Números a serem ordenados(N): ");
  unsigned int N = 0;
  scanf("%u", &N);
  Item* number_array = (Item*)malloc(sizeof(Item)*N);
  for (size_t i = 0; i < N; i++)
  {
    scanf("%d", &number_array[i]);
  }

  clock_t time = clock();
  sort(number_array, 0, N-1);
  time = clock() - time;

  printArray(number_array, N);
  printf("Elapsed Time: %f s\n", ((float)time)/CLOCKS_PER_SEC);

  free(number_array);
  return 0;
}

void printArray(Item* number_array, unsigned int size){
  printf("Sorted Array:\n");
  printf("[");
  for (size_t i = 0; i < size; i++)
  {
    printf(" %d", key(number_array[i]));
  }
  printf(" ]\n");
}
