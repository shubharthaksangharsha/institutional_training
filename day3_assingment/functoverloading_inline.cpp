#include <iostream>
#include<string>
using namespace std;

class Mul {  //class declaration and defination
public:
  int doublet(int i) {  //declaration and defination of function
        return i*i;
    }
  double doublet(double i) { //overloading the function 
        return i;
    }
  inline int cube(int i){ //inline function using inline keyword
    return i*i*i;
  }
};


//Driver code:-
int main() {
   Mul obj;
   cout<<"Square: "<< obj.doublet(3)<<endl;
   cout<<"Square: "<< obj.doublet(5005.516)<<endl;
   cout<<"Cube: "<< obj.cube(3)<<endl;
   
   return 0;
}


