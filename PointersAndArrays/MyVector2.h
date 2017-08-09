#ifndef MyVector2_H
#define MyVector2_H
#include <initializer_list>
#include <ostream>

class MyVector2 {
public:
  MyVector2(int s);
  MyVector2(std::initializer_list<double> lst);
  double& operator[](int i);
  int size() const;
  void push(double val);
  ~MyVector2(); // destructor
private:
  double* elems; // pointer to elems of double
  int sz;
  int idx;
};
#endif

// std::ostream &operator<<(std::ostream &os, MyVector2 const &m);
