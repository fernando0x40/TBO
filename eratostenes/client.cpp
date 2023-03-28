#include <stdlib.h>
#include <stdio.h>
#include "eratostenes.h"

int main(int argc, char const *argv[])
{
  unsigned int n = 0;
  printf("Preencha com o maior número (N): ");
  scanf("%u", &n);
  eratostenes crivo_erastotenes(n);
  crivo_erastotenes.run();
  crivo_erastotenes.print();
  return 0;
}
