#include<bits/stdc++.h>
using namespace std;

class Complex; // Forward declaration

class calculator {
public:
  int sum(int a, int b) { return (a + b); }

  int sumrealcomplex(Complex, Complex);
  int sumcomcomplex(Complex, Complex);
};

class Complex {
  int a, b;

  // friend functions individually
  // friend int calculator::sumrealcomplex(Complex, Complex);
  // friend int calculator::sumcomcomplex(Complex, Complex);

  // Alternative — friend class
  friend class calculator;

public:
  void setdata(int x, int y) {
    a = x;
    b = y;
  }

  void printdata() {
    cout << "The number is " << a << " + " << b << "i" << endl;
  }
};

// Definitions of friend functions:
int calculator::sumrealcomplex(Complex o1, Complex o2) {
  return o1.a + o2.a;
}

int calculator::sumcomcomplex(Complex o1, Complex o2) {
  return o1.b + o2.b;
}

int main() {
  Complex o1, o2;
  o1.setdata(1, 4);
  o2.setdata(5, 7);

  calculator calc;

  int res = calc.sumrealcomplex(o1, o2);
  cout << "The sum of real part of o1 and o2 is " << res << endl;

  int resc = calc.sumcomcomplex(o1, o2);
  cout << "The sum of complex part of o1 and o2 is " << resc << endl;

  return 0;
}
