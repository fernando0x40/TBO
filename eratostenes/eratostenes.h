#ifndef ERATOSTENES_H
#define ERATOSTENES_H

#include <stdlib.h>
#include <stdio.h>

class eratostenes
{
private:
  unsigned int size;
  int* array;

  int* find(unsigned int number);
  void mark_multiple(unsigned int number);
  unsigned int next_prime(unsigned int current_prime);
  bool out_of_bounds(unsigned int number);
  void print_non_marked();
public:
  eratostenes(int max);
  ~eratostenes();

  void run();
  void print();
};

#endif // ERATOSTENES_H
