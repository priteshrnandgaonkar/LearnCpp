#include <iostream>
#include "MyVector2.h"
using namespace std;

struct MyVector {
  double sz;
  double* elems; // pointer to array of elems
};

void vector_init(MyVector& vec, int sz) {
  vec.elems = new double[sz];
  vec.sz = sz;
}
double read_and_sum(int s)
// read s integers from cin and return their sum; s is assumed to be positive
{
  MyVector v;
  vector_init(v,s);
  for (int i=0; i!=s; ++i)
    cin>>v.elems[i];
  double sum = 0;
  for (int i=0; i!=s; ++i)
    sum+=v.elems[i];

  return sum;
}

double read_and_sum2(int s)
// read s integers from cin and return their sum; s is assumed to be positive
{
  MyVector2 v(s);
  // for (int i=0; i!=s; ++i) {
  //   double input;
  //   cin >> input;
  //   v.push(input);
  // }
  double sum = 0;
  // for (int i=0; i!=s; ++i)
  //   sum+=v[i];

  return sum;
}

int main(int argc, char const *argv[]) {
  double sum = read_and_sum2(5);
  // double* elems[5];
  // *(*elems) = 9.0;

  cout << "sum: " << sum <<'\n';
  return 0;
}
