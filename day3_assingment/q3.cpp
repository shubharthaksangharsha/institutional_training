//By Shubharthak
#include<iostream>
#include<math.h>
using namespace std;
class Football{
public: 
void calculate(){
    int sum=0;
    int count=0;
    while(1){
            cout<<"Count before : " << count <<endl;
      cout<<"enter the score in "<<++count<<" match"<<endl;
      cout<<"Count before : " << count <<endl;
        int score;
        cin>>score;
        if(score==-1){
            break;
        }
        sum+=score;   
    }
        cout<<"Total points in the match is "<<sum<<endl;
        cout<<"average points of series is "<<sum/(count-1)<<endl;
    
}
};
int main(){  
  Football obj;
  obj.calculate();
  
  return 0;
}
