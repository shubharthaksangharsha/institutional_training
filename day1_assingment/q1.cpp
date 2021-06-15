//By Shubharthak
//Write a C++ program to declare class called CAR with suitable data member and member functions. Accept the details of at least 5 cars from users and display the details of each car using display_car_details() member function.
#include<iostream> // declaration of header file
using std::cout;   //calling all the necessary functions from std namespace. 
using std::string;
using std::cin;
using std::endl;

class CAR{   //declaration and definition of class CAR
  string car_name,color; // data members
  int motor_id, numberplate;

public : //using access specifier 
  //member functions declaration and defination:-
  void car_input(){
     cout<< "Please enter CAR Details: "<<endl;
     cin>>car_name>>motor_id>>numberplate>>color;
   }

  void display_car_output(){
  
    cout<<"Car name: "<< car_name<<endl;
    cout<<"Car Motor id: " << motor_id<<endl;
    cout<<"Car Numberplate: " << numberplate<<endl;
    cout<<"Car Color: " << color<<endl;
  }
};

//driver code:-
int main(){
  //loop initialization for obj and using methods to access the class member functions:-
  for(int i = 1 ; i<=5; i ++ ) {
    CAR obj;
    obj.car_input();
    cout<<endl;
    obj.display_car_output();
    cout<<endl;
  }
  return 0;
}
