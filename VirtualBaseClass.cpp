#include<bits/stdc++.h>
using namespace std; 

class Student{
     protected :
     int rollno ; 
      public : 
      void setrollno( int data){
         rollno = data ; 
      }
      void getrollno(){
        cout << "Roll No is " << rollno << endl ; 
      }
};

class Exam : virtual public Student{
 protected : 
 int phy , math ; 
  public : 
  void setmarks(int a , int b){
     phy = a ; 
     math = b ; 
  }
   void getmarks(){
     cout << "Marks are " << phy << " and " << math << endl ; 
   }
};

class Sports : virtual public Student{
     protected : 
     int score ;
      public : 
      void setscore(int a){
         score = a ; 
      }
      void getscore(){
         cout << "Score is " << score<< endl  ; 
      }
};

class Result : public Sports , public Exam { 
  public : 
  void display (){
     int total = phy + math + score ; 
     getscore() ;
     getmarks() ; 
     cout << "Total is " << total << endl ; 
  }
};

int main() {
    Result r;
    r.setrollno(67);     // Roll No set to 67
    r.setmarks(95, 98);  // Increased marks
    r.setscore(91);      // Increased sports score

    r.getrollno();
    r.display();

    return 0;
}