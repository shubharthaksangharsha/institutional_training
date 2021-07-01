#include<iostream>

using namespace std;

int main()
{
  int i,j,temp,a[5],n,k; // variable declarations
  
   cout<<"Enter elements to rotate: ";
   cin>>n; //taking number of rotation
   cout<<"\nEnter elements: "; 
    for(i=0;i<5;i++) 
    {  
      cin>>a[i]; //inputing elements inside the array
    }

    //algo
    for(i=0;i<n;i++)
    {  k=a[0]; 
       for(j=0;j<5;j++)
       {  temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp;
       }
    a[4]=k;   
    }
    cout<<endl<<"Output:- ";
    for(i=0;i<5;i++)
    {   
        cout<<"\n"<<a[i];
    } 
    return 0;
}    
