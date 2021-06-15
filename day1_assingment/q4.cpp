//By Shubharthak

#include<iostream> // declaration of header file
using std::cout;   //calling all the necessary functions from std namespace. 
using std::string;
using std::cin;
using std::endl;

class Student{ // public data members
public:
  string name;
  int roll_no;

};
//Driver's code:-
int main(){
  Student s1;
  s1.name="John"; //assinging value of student
  s1.roll_no=2;

  cout<<"Student's name: " << s1.name <<endl<<"Student's roll no: "<<s1.roll_no<<endl;
  
  return 0;
}
  
