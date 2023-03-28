#ifndef ERATOSTENES_H
#define ERATOSTENES_H

#include <stdlib.h>

class eratostenes
{
private:
  unsigned int size;
  int* array;

  int* find(unsigned int number);
  void mark_multiple(int number);
  int next_prime(int current_prime);
  bool out_of_bounds(int number);
  void print_non_marked();
public:
  eratostenes(int max);
  ~eratostenes();

  void run();
  void print();
};

#endif // ERATOSTENES_H
