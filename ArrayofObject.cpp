#include<bits/stdc++.h>
using namespace std ; 
 
class Employee{
    int salary ; 
     int id ; 
     public : 
     void setdata(void){
         salary = 122 ; 
       cout << "Enter the Employee id " << endl ; 
        cin >> id ;         
     }
     void getdata(){
         cout << "The id and salrary of Employee is " << id << " and " << salary << endl ;  
     }
};

int main(){
 
  Employee a[5] ; 
   for(int i=0 ; i<5 ; i++ ){
     a[i].setdata(); 
     a[i].getdata(); 
   }
 
}