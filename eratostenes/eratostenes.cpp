#include "eratostenes.h"

eratostenes::eratostenes(int max){
  this->size = max-1;
  this->array = (int*)malloc(sizeof(int)*this->size);
  for (size_t i = 0; i < this->size; i++) this->array[i] = 0;
}
eratostenes::~eratostenes(){
  free(this->array);
  free(this);
}
int* eratostenes::find(unsigned int number){
  if (!this->out_of_bounds(number))
    return this->array + number - 2;
  return NULL;
}
void eratostenes::mark_multiple(unsigned int number){
  for (unsigned int i = number * 2; !this->out_of_bounds(i); i += number)
    this->find(i)[0] = 1;  
}
unsigned int eratostenes::next_prime(unsigned int current_prime){
  for (unsigned int i = current_prime + 1; !this->out_of_bounds(i); i++)
    if (this->find(i)[0] == 0) return i;
  return this->size+2;  
}
bool eratostenes::out_of_bounds(unsigned int number){
  return number > this->size+1;
}
void eratostenes::print_non_marked(){
  printf("[");
  for (unsigned int i = 0; !this->out_of_bounds(i); i++)
    if (this->find(i)[0] == 0)
      printf(" %u", i);
  printf(" ]\n");  
}
void eratostenes::run(){
  for (unsigned int i = 2; !this->out_of_bounds(i); i = this->next_prime(i))
    this->mark_multiple(i);
}
void eratostenes::print(){
  this->print_non_marked();
}