#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    int a, b, c;

public:
    int d, e;

    void setdata(int a1, int b1, int c1);
    void getdata() {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};

void Employee::setdata(int a1, int b1, int c1) {
    a = a1;
    b = b1;
    c = c1;
}

int main() {
    Employee Mrinal;

    // Mrinal.a = 1200; // error: 'a' is private
    Mrinal.d = 1900000;
    Mrinal.e = 12000;

    Mrinal.setdata(10000000, 100000000, 100000000); 
    Mrinal.getdata();

    return 0;
}
