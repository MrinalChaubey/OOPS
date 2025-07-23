#include<bits/stdc++.h>
using namespace std ; 
 class Base{
    int a ; 
    protected : 
    int b ;   
 };

 class Derived : protected Base {
     public : 
     void setb() ; 
     int getb() ; 
 };
  
   void Derived :: setb(){
     b = 20 ; 
   }
    
    int Derived :: getb(){
         return b ; 
    }

 int main(){
 Derived d ; 
     d.setb();    
  cout << d.getb() << endl  ; 
 return 0 ; 
 }