#include<bits/stdc++.h>
using namespace std;

class Employee {
    int id;
    static int count;  // Declaration of static member

public:
    void setdata(void) {
        cout << "Enter id for the Employee " << endl;
        cin >> id;
        count++;
    }

    void getdata(void) {
        cout << "The employee id for Employee Number " << count << " is " << id << endl;
    }

    static void getcount(void) {
        cout << "Count is " << count << endl;
    }
};

// Define static member outside the class
int Employee::count = 0;

int main() {
    Employee Harry, Rohan, Mohan;

    Harry.setdata();
    Harry.getdata();
    Employee::getcount();

    Rohan.setdata();
    Rohan.getdata();
    Employee::getcount();

    Mohan.setdata();
    Mohan.getdata();
    Employee::getcount();
}
