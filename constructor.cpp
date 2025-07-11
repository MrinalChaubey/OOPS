#include<bits/stdc++.h>
using namespace std ; 
 
class Complex{
     int a , b  ; 
      public : 
     void printdata(){
         cout << "The number is " << a << " +" << b << "i" << endl ; 
     }
 Complex(void) ;  // default constructor
} ;

Complex  :: Complex(void){
       a = 10;
    b = 0;
    // cout<<"Hello world";
}

int main(){
     Complex C ; 
      C.printdata() ; 
      Complex C1 ; 
       C1.printdata() ; 
 
}