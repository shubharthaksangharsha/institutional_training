#include<iostream>
using namespace std;

class Football{
  int match, sum,point,average;

public:
  void input(){
    cout<<"Please enter number of match: ";
    cin>>match;

    for(int i = 0 ;  i < match ; i ++){
      for(int j = 0; j < i ; j++ ){
      cout<<"Please enter points: ";
      cin>>point;
      if(point == -1 ) {
	break;
      }
      sum = sum+ point;
      }
    }

  }
      
 inline int calculate(int sum){
   average= sum / match;
     return average;
 }
};

  int main(){
    Football obj1;
    obj1.input();
    cout<< "Average: " << obj1.calculate(obj1.sum)<<endl;

    return 0;
  }
