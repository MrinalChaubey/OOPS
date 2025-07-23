#include<bits/stdc++.h>
using namespace std ; 

class Student{
     protected : 
      int rollno ; 
       public : 
       void setrollno(int r){
         rollno = r ; 
       }
       void getrollno(){
         cout << rollno << "  is your roll no " << endl ;  
       }
}; 
 
class Exams : public Student{
   protected : int maths , physics ; 
    public : 
     void setmarks(int a , int b ){
         maths = a ; 
          physics = b ; 
     } 
     void displaymarks(){
         cout << "Your marks are " << maths << " and " << physics << endl ;  
     }
};

class Results : public Exams{
     int percentage ; 
      public : 
      void display(){
         getrollno() ; 
          displaymarks() ; 
         cout << "Percentage is  " << (maths + physics)/2 << " % " << endl ; 
      }
};

int main(){
 Results r ; 
 r.setrollno(67) ; 
r.setmarks(98 , 100) ; 
r.display() ; 
return 0 ; 
}