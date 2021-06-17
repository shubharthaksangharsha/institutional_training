//by shubharthak
#include <iostream>
using namespace std;

class grades {


public :
  grades(int percent){
    	if(percent>=50)
	{
		if(percent>=85)
		{
			cout<<"E : Excellent work"<<endl;
		}
		if(percent<85)
		{
			if(75<=percent)
			cout<<"O : Outstanding work"<<endl;
		}
		if(percent<75)
		{
			if(65<=percent)
			cout<<"G : Good work"<<endl;
		}
		if(percent<65)
		{
			cout<<"S: Satisfactory "<<endl;
		}
	}
	else
	{
		if(percent>=33)
		{
			cout<<"Resit in exam"<<endl;
		}
		else
		{
			cout<<"Redo course"<<endl;
		}

	}
  }
    
  };
int main()
{
  int percent, n;
  cout<<"Please enter number of students: " ;
  cin>>n;
  for(int i = 0 ; i <n ; i++ ) {
     cout<<"Enter students percentage: ";
     cin>>percent;   
     grades obj1=percent;
	}

	return 0;
}
