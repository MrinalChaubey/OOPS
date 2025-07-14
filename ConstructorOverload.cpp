#include<bits/stdc++.h>
using namespace std ; 

class Complex{
    int a , b ; 
    public : 
   Complex(int x , int y){
      a = x ; 
      b = y ;
   }
 Complex(int x){
     a = x ; 
      b = 0 ; 
 }
  void print(){
     cout << a << " +" << b << "i" << endl ; 
  }

};

int main(){
     Complex c1(2,3) ; 
     c1.print() ; 
     Complex c2(1) ; 
     c2.print() ; 
     return 0 ; 
}