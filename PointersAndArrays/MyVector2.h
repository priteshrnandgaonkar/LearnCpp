#ifndef MyVector2_H
#define MyVector2_H
class MyVector2 {
public:
  MyVector2(int s);
  double& operator[](int i);
  int size();
  void push(double val);
  ~MyVector2(); // destructor
private:
  double* elems; // pointer to elems of double
  int sz;
  int idx;
};
#endif
