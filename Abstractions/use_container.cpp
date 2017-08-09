#include "Container.h"
#include <iostream>
#include "Vector_Container.cpp"
#include "List_Container.cpp"

void use(Container& c) {
  const int sz = c.size();
  for (int i=0; i!=sz; ++i) std::cout << c[i] << '\n';
}

int main(int argc, char const *argv[]) {
  Vector_container v = {2,3,4,5,6,7,8,9,90,12,123,32424};
  List_Container lc = {23,4,5,6};
  use(lc);
  return 0;
}
// Compile with g++ -std=c++11 use_container.cpp ../PointersAndArrays/MyVector2.cpp
