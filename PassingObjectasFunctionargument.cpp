#include<bits/stdc++.h>
using namespace std ; 
 
 class Complex{ 
 int a , b ; 
  public : 
   void setdata(int a1 , int b1){
     a = a1 ; 
      b = b1 ;
   }
    
     void setdatabySum(Complex o1 , Complex o2){
         a = o1.a + o2.a ; 
          b  = o2.b + o1.b ; 
      }

 void displaydata(void){
     cout << "The final Sum is " << a << "+" << b << "i" << endl ; 
 }
   }; 

int main(){
 Complex A , B , C ; 
 A.setdata(7 , 8 ) ; 
 B.setdata(8 , 9 ) ; 
  
  C.setdatabySum(A , B) ; 
   
   A.displaydata() ; 
   B.displaydata() ; 
   C.displaydata() ; 

}