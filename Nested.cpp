#include<bits/stdc++.h>
using namespace std ; 

class binary{

string s ; 
void check_binary(void) ;   

public : 
 void read(void) ; 
  void ones_complement(void) ; 
  void display(void) ; 

}; 


void binary :: read(){
     cout << "Enter the string" << endl ; 
      cin >> s ; 
}

void binary :: check_binary(){
     for(int i=0 ; i<s.length() ; i++ ){
         if(s[i] != '0'  &&  s[i] != '1'){
             cout << "Incorrect Binary String" << endl ; 
             exit(0) ; 
           }
     }
}

void binary :: ones_complement(){
    check_binary() ; 
     for(int i=0 ; i<s.length() ; i++ ){
         if(s[i] == '0')s[i] = '1' ; 
         else s[i] = '0' ; 
     }
}


void binary ::  display(){
     for(int i=0 ; i<s.size() ; i++){
         cout << s[i] ;
     }
     cout << endl ;
}

 int main(){
 binary b ; 
 b.read() ; 
 b.display();
 b.ones_complement() ;  
b.display() ; 

  // b.check_binary() ;  this will give error as check_binary() is private 
 }