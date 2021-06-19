#include<iostream>
#include<math.h>
using namespace std;

class Function_Overloading{
public:
  void  read(int m, int n){
    int a[5][5];
    cout<<"Enter elements of matrix: "<<endl;
    for(int i = 0; i<m ; i++)
      for(int j = 0;j<n; j++)
	cin>>a[i][j] ;

     for (int i =0; i < m ; i++){
      for(int j = 0 ; j < n ; j++){
	cout<<a[i][j]<< " " ;
      }
    }

    }

  void read(double x, double y) {
    cout<<endl<<"Please enter two number, Second number will be power of first number: ";  
    cin >> x>> y;
    double power =  pow(x,y);
    cout<< endl<<"Power: " <<power<<endl;

  }
    
 void read(int a, int b, int c){
   if(a > b || a > c) {
     cout<< "Largest is : "<<a<<endl;
   }
   else if(b > a || b> c){
     cout<< "Largest is : "<<b<<endl;
   }
     else {
       cout<<endl<< "Largest is : "<<c<<endl;
     }
 }

}; 
int main(){
  Function_Overloading obj1;
  obj1.read(2,2);
  obj1.read(2.3,4.2);
  obj1.read(5, 9, 2);


  return 0;
}
  
  
