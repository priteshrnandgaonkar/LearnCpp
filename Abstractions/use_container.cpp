#include "Container.h"
#include <iostream>
#include "Vector_Container.cpp"
void use(Container& c) {
  const int sz = c.size();
  for (int i=0; i!=sz; ++i) std::cout << c[i] << '\n';
}

int main(int argc, char const *argv[]) {
  Vector_container v = {2,3,4,5,6,7,8,9,90,12,123,32424};
  use(v);
  return 0;
}
