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
int* eratostenes::find(int number){
  return this->array + number - 2;
}
void eratostenes::mark_multiple(int number){

}
int eratostenes::next_prime(int current_prime){

}
bool eratostenes::out_of_bounds(int number){

}
void eratostenes::print_non_marked(){

}
void eratostenes::run(){

}
void eratostenes::print(){

}