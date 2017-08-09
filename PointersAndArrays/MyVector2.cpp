#include "MyVector2.h"
#include <iostream>

MyVector2::MyVector2(int s)
{
  if (s<0) throw std::length_error("Cant have negative length");
  elems = new double[s];
  sz = s;
  idx = 0;
}
MyVector2::MyVector2(std::initializer_list<double>lst)
{
  elems = new double[lst.size()];
  sz = lst.size();
  for (auto x=1; x<lst.size(); ++x) {
    elems[x] =  *(lst.begin() + x);
  }
}

double& MyVector2::operator[](int i)
{
  return elems[i];
}

int MyVector2::size() const {
  return sz;
}

// std::ostream &operator<<(std::ostream &os, MyVector2 const &m) {
//   os << m.size();
//   return os;
// }

void MyVector2::push(double val) {
  elems[idx] = val;
  ++idx;
}

MyVector2::~MyVector2() {
  std::cout << "MyVector2 is cleaned" << '\n';
  delete []elems;
}
