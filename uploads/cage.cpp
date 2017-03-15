//file : cage.cpp

#include "cage.h"

Cage::Cage(int b_1,int k_1,int b_2,int k_2) {
  this->b1 = b_1;
  this->k1 = k_1;
  this->b2 = b_2;
  this->k2 = k_2;
}
int Cage::GetB1() {
  return this->b1;
}
int Cage::GetB2() {
  return this->b2;
}
int Cage::GetK1() {
  return this->k1;
}
int Cage::GetK2() {
  return this->k2;
}