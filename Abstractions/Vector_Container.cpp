#include "../PointersAndArrays/MyVector2.h"
#include <initializer_list>
class Vector_container : public Container { // Vector_container implements Container
  MyVector2 v;
public:
  Vector_container(int s) : v(s) { } // Vector of s elements
  double& operator[](int i) { return v[i]; }
  int size() const { return v.size();}
  Vector_container(std::initializer_list<double> lst): v(lst.size()) {
    for (auto x: lst) {
      v.push(x);
    }
  }
 ~Vector_container() {}
 };
