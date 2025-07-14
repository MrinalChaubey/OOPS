#include<bits/stdc++.h>
using namespace std ; 

class Simple{
     int a , b ; 
     public : 
      Simple(int x , int y = 8 ){
               a = x ; 
               b = y ; 
     }
     void print(){
         cout << a << "  " << b << endl ; 
     }
};

int main(){
      Simple s(3) ; 
      s.print() ; 
}