#include "MyVector2.h"
#include <iostream>

MyVector2::MyVector2(int s)
{
  if (s<0) throw std::length_error("Cant have negative length");
  elems = new double[s];
  sz = s;
  idx = 0;
}

double& MyVector2::operator[](int i)
{
  return elems[i];
}

int MyVector2::size() {
  return sz;
}

void MyVector2::push(double val) {
  elems[idx] = val;
  ++idx;
}

MyVector2::~MyVector2() {
  std::cout << "MyVector2 is cleaned" << '\n';
  delete []elems;
}
