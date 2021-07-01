#include<iostream>
using namespace std;

int main()
{
  int i,j,temp,a[10]; //variable declarations
  cout<<"Enter elements: ";
  for(i=0;i<5;i++)
  {
    cin>>a[i];  //taking input
  }

  //algo
  for(i=0;i<5;i++)
  {  for(j=i+1;j<5;j++)
     { 
         if(a[j]<a[i])
         { temp=a[i];
           a[i]=a[j];
           a[j]=temp;
         }
        
     }
  }

  //displaying
  cout<<"Array in arrange order:-\n";
  for(i=0;i<5;i++)
  {
     cout<<a[i]<<"\n"; 
  }
  
  
  return 0;
}  

