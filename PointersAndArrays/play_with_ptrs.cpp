#include <iostream>
using namespace std;

// Learning:- the array pointers of the array are adjacent and are zero terminated

// p is assumed to point to zero terminated Array of char
int count_x(char *p, char x) {
  if (p == nullptr) {
    return 0;
  }
  int count = 0;
  for(; *p != 0; ++p) {
    if (*p == x) {
      count++;
    }
    // ++p;
    cout << "*p = " << *p << '\n';
  }
  return count;
}

int main(int argc, char const *argv[]) {
  char arr[8] = {'x', 'c', 'g', 'x', 'd', 'x', 'f'};
  cout << "Count of " << "x in " << arr << " is " << count_x(&arr[0], 'x') << '\n';
  return 0;
}
