#include<bits/stdc++.h>
using namespace std ; 

class Complex {
  int a, b;

public:
  void getnumber(int a1, int b1) {
    a = a1;
    b = b1;
  }

  void printnumber() {
    cout << "The number is " << a << " + " << b << "i" << endl;
  }

  friend Complex sum(Complex o1, Complex o2);
};

Complex sum(Complex o1, Complex o2) {
  Complex o3;
  o3.getnumber((o1.a + o2.a), (o1.b + o2.b));
  return o3;
}


int main() {
  Complex c1, c2, c3;
  c1.getnumber(1, 2);
  c2.getnumber(3, 4);
  c3 = sum(c1, c2);

  c1.printnumber();
  c2.printnumber();
  c3.printnumber();

  return 0;
}