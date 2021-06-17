//by shubharthak
#include<iostream>
using namespace std;
class scores{
public:
  scores(int fsc, int nts){
	if(fsc>70)
	{
		if(nts>=70)
		{
			cout<<"\nYou have secured your seat  in IT Department in oxford University";
		}
		else if(nts>=60)
		{
			cout<<"\n You have secured your seat  in electronics Department in oxford University";
		}
		else if(nts>=50)
		{
			cout<<"\n You have secured your seat  in tele comm. Department in oxford University.";
		}
	}
	else if(fsc<=70)
	{
		if(fsc>=60)
		{
			if(nts>=50)
			{
				cout<<"\n You have secured your seat  in IT Department in MIT University";
			}
		}
		else if(fsc<=59)
		{
			if(fsc>=50)
			{
				if(nts>=50)
				{
					cout<<"\n You have secured your seat  in chemical Eng. Department in MIT University";
				}
			}
		}

		else if(fsc<50)
		{
			if(fsc>40)
			{
				if(nts>=50)
				{
					cout<<" You have secured your seat  in Computer Engr Department in MIT University";
				}
			}
		}
	}
	else
	{
		cout<<"Invalid Details";
	}
    
  }
};
int main()
{
      int n,fsc,nts;
	cout<<"Enter number of students: " ;
	cin>>n;
	for(int i = 0 ; i< n ; i++ ) {

	cout<<"Enter Your Fsc SCORE : ";
	cin>>fsc;
	cout<<"Enter Your NTS SCORE : ";
	cin>>nts;
	scores obj1(fsc,nts);
	cout<<endl;
		
	}
	return 0;
}
