#include <iostream>

class Complex{
private:
  double re, imag;
public:
  Complex() {
    re = 0;
    imag = 0;
  }
  Complex(double r, double i) {
    re = r;
    imag = i;
  }
  Complex(double r) {
    re = r;
    imag = 0;
  }
  double real() const { return re; }
  double imaginary() const { return imag; }
  void real(double r) { re = r; }
  void imaginary(double i) { imag = i; }

  Complex& operator+=(Complex c) {
    re += c.real();
    imag += c.imaginary();
    return *this;
  }

  Complex& operator-=(Complex c) {
    re -= c.real();
    imag -= c.imaginary();
    return *this;
  }
};

Complex operator+(Complex c1, Complex c2) {
  return c1 += c2;
}
Complex operator-(Complex c1, Complex c2) {
  return c1 -= c2;
}

int main(int argc, char const *argv[]) {
  Complex c1 = Complex(2,3);
  Complex c2 = Complex(4,5);

  std::cout << "Complex c1:- " << "real: " << c1.real() << " imag: " << c1.imaginary() <<'\n';
  std::cout << "Complex c2:- " << "real: " << c2.real() << " imag: " << c2.imaginary() <<'\n';

  Complex c3 = c2 + c1;
  std::cout << "Complex c3 = c1 + c2:- " << "real: " << c3.real() << " imag: " << c3.imaginary() <<'\n';
  c3 += c1;
  std::cout << "Complex c3 += c1:- " << "real: " << c3.real() << " imag: " << c3.imaginary() <<'\n';
  Complex c4 = c3 - c1;
  std::cout << "Complex c4 = c3 - c1:- " << "real: " << c4.real() << " imag: " << c4.imaginary() <<'\n';
  c4 -= c2;
  std::cout << "Complex c4 -= c2:- " << "real: " << c4.real() << " imag: " << c4.imaginary() <<'\n';
  return 0;
}
