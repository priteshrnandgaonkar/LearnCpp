#include <iostream>
using namespace std;

void withCopying() {
  int arr[6] = {1,2,3,4,5,6};
  cout << "Print Array before copying \n";
  for (auto x: arr){
    ++x;
    cout << x << "\n";
  }

  int secondArray[6];
  for (int i = 0; i < 6; ++i) {
    secondArray[i] = arr[i];
  }
  secondArray[0] = 10;

  cout << "Print First Array After copying \n";
  for (auto x: arr){
    cout << x << "\n";
  }

  cout << "Print Second Array After copying \n";
  for (auto x: secondArray){
    cout << x << "\n";
  }
}

void withoutCopying() {
  int arr[6] = {1,2,3,4,5,6};
  cout << "Print Array before copying \n";
  for (auto x: arr){
    cout << x << "\n";
  }

  int secondArray[6];
  for (int i = 0; i < 6; ++i) {
    int *x = &arr[i];
    (*x)++;    // Mind Boggling
    secondArray[i] = *x;
  }
  cout << "Print First Array After copying \n";
  for (auto x: arr){
    cout << x << "\n";
  }

  cout << "Print Second Array After copying \n";
  for (auto x: secondArray){
    cout << x << "\n";
  }
}

int main() {
  withoutCopying();
  return 0;
}
