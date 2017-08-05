#include <iostream>
#include <math.h>
using namespace std;


double square(double x) {
  return x * x;
}

double multiply(double x, double y) {
  return x * y;
}

void print_square(double num) {
  cout << "Square of " << num << " is " << multiply(num, num) << "\n";
}

bool accept() {
  cout << "Do u want to proceed (y/n)?\n";
  char answer = 0;
  cin >> answer;
  if (answer == 'y') {
    return true;
  }
  else {
    return false;
  }
}

bool accept2() {
  cout << "Do u want to proceed (y/n)?\n";
  char answer = 0;
  cin >> answer;
  switch (answer) {
    case 'y':
      return true;
    case 'n':
        return false;
    default:
      cout << "I will take that as No \n";
      return false;
    }
}

bool accept3() {
  int i = 1;
  while (i < 4) {
    cout << "Do u want to proceed (y/n)?\n";
    char answer = 0;
    cin >> answer;
    switch (answer) {
      case 'y':
        return true;
      case 'n':
          return false;
      default:
        ++i;
      }
  }
  cout << "I will take that as No \n";
  return false;
}


int main() {
  int i = {4};
  auto j = sqrt(4);
  j = 4.3;
  j = j * j;
  print_square(j);
  auto ans = accept3();
  cout << "Your response is " << ans << "\n";
}
