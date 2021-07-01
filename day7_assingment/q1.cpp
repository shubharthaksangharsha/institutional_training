#include<iostream>
using namespace std;

//Function to reverse the array
void reverseArray(int arr[], int start,  int end){ //declaration and defination of the function
  
  while(start<end)  //traverse the array
    {
      int temp= arr[start]; //creation of temporary variable for swapping 
      arr[start]= arr[end]; //swapped
      arr[end]= temp;  //storing the value of temp(first element) to last element
      start++;  //incrementing start value 
      end--;  //decrementing end value 
    }
}
//Function to display the array 
void printArray(int arr[], int size){ //declaration and defination of the function 
   for(auto i=0; i< size; i++){ //traverse the array
     cout<<arr[i]<< " " ; //print each element 
     cout<<endl; 
}
  
  
}

//Driver Code:-
int main(){

  int arr[]= {1,2,3,4,5,6}; 
  int n= (sizeof(arr)/sizeof(arr[0])); //calculating size of array = total size of array / size of first element
  cout<<"Entered Array:-"<<endl;
  printArray(arr,n);
  reverseArray(arr,0, n-1);
  cout<<"Reversed Array:-"<<endl;
  printArray(arr,n);

  return 0;
}
