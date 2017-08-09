#include "MyVector2.h"
#include <iostream>

double read_and_sum2(int s)
// read s integers from cin and return their sum; s is assumed to be positive
{
  MyVector2 v(s);
  for (int i=0; i!=s; ++i) {
    double input;
    std::cin >> input;
    v.push(input);
  }
  double sum = 0;
  for (int i=0; i!=s; ++i)
    sum+=v[i];
  return sum;
}

void test() {
  try {
    int x = 0;
    int y = 27;
    int z = x-y;
    MyVector2 v(z);
  }
  catch (const std::length_error& error) {
    std::cout << "length_error: " << error.what() <<"\n";
  // handle negative size
  }
  catch (std::bad_alloc) {
    std::cout << "bad_alloc" << "\n";
  // handle memory exhaustion
  }
}

int main(int argc, char const *argv[]) {
  double sum = read_and_sum2(5);
  std::cout << "Sum: " << sum << "\n";
  MyVector2 v1 = {2,3,4,5,6,7,8,9,23,23,3234};
  std::cout << "Sum: " << sum << "\n";
  std::cout << "V1: " << v1.size() << "\n";
  test();
  return 0;
}
