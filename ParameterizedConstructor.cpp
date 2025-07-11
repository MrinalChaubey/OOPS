#include<bits/stdc++.h>
using namespace std ; 

class Complex{
  int a , b ; 
   public : 
   Complex(int  , int ) ; 
   void printdata(){
     cout << "The final value is " << a << " +" << b << "i" << endl ;  
   }
};

 Complex :: Complex(int x1 , int x2){
      a = x1 ; 
        b = x2 ; 
 } 

 int main(){
    // implicit call 
     Complex c1(3 , 2) ; 
     c1.printdata() ; 

 // explicit call 
      Complex c2 = Complex(4 , 6) ; 
      c2.printdata() ; 
 }