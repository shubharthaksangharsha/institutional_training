/*The program is created by Shubharthak
In this program we have created two inline functions MAX and MIN.
The function helps to calculate the largest and smallest number 
input by the user. We have also use ternary operator i.e ? : */
#include<iostream>
using namespace std;
  
inline void MAX(int a, int b) {
	
	(a>b) ? cout << a : cout << b;
}

inline void MIN(int a, int b) {

	(a<b) ? cout << a : cout << b;
}


int main(){
	int a, b ;
	cout << "Please enter 2 numbers: ";
	cin >> a >> b ; 
    cout<<"Largest number : ";
    MAX(a,b);
	cout<< "\n";
	cout<<"Smallest number : ";
	MIN(a,b);
	cout<<"\n";
	return 0; 


}   
