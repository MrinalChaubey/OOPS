#include <bits/stdc++.h>
using namespace std;

class Y; // forward declaration

class X {
  int data;
  friend void exchange(X &, Y &);

public:
  void setdata(int value) {
    data = value;
  }
  void display() {
    cout << "X data: " << data << endl;
  }
};

class Y {
  int nums;
  friend void exchange(X &, Y &);

public:
  void setdata(int value) {
    nums = value;
  }
  void display() {
    cout << "Y nums: " << nums << endl;
  }
};

void exchange(X &c1, Y &c2) {
  int temp = c1.data;
  c1.data = c2.nums;
  c2.nums = temp;
}

int main() {
  X c1;
  c1.setdata(12);

  Y c2;
  c2.setdata(18);

  cout << "Before exchange:" << endl;
  c1.display();
  c2.display();

  exchange(c1, c2);

  cout << "After exchange:" << endl;
  c1.display();
  c2.display();

  return 0;
}
