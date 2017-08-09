#include <list>
#include <stdexcept>
#include "Container.h"

class List_Container: public Container {
  std::list<double>ld;
public:
  List_Container(std::initializer_list<double> il): ld{il} {}

  double& operator[](int i) {
    for (auto& x : ld) {
      if (i==0) return x;
      i -= 1;
    }
    throw std::out_of_range("List container");
  }

  int size() const {
    return ld.size();
  }

  ~List_Container() {}
};
