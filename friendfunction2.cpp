#include<bits/stdc++.h>
using namespace std ; 
 
class Y ; // forward declaration 

class X {
   int data ; 
   public : 
    void setdata(int value){
         data = value ; 
    }  
    friend void sum(X o1 , Y o2) ; 
}; 

class Y{
int nums ; 
 public : 
 void setdata(int value){
     nums = value ; 
  }
   friend void sum(X o1 , Y o2) ; 
};

void sum (X o1 , Y o2){
      cout << "The value of sum is " << o1.data + o2.nums << endl ; 
}

int main(){
    X a1;
    a1. setdata(3);

    Y b1;
    b1. setdata(15);

    sum(a1, b1);
    return 0;
}