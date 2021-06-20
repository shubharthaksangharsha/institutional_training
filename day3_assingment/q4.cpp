#include <iostream>
using namespace std;

class Gcd{
public: 
int g_c_d (int a, int b)
{
if (a <= 0 || b <= 0) // a parameter is not positive
return 0; // exit and return the error sentinel
int trial_divisor;
trial_divisor = ( a <= b ? a : b ); // set it to the smaller
while (a % trial_divisor != 0 || b % trial_divisor != 0)
--trial_divisor;
return trial_divisor;
}
};

int main(){
  Gcd obj;
  int n1, n2 ;
 cout<<"Please enter Two numbers : " ;
 cin>>n1>>n2;
 cout<<"The greatest common divisor: " << obj.g_c_d(n1, n2)<<endl;

 return 0;

}
