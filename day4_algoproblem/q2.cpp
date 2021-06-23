#include<iostream>
#include<vector>
using namespace std;

int algo(vector<int>ivec){ //declaration and defination of function algo
  int max1= 0, max2= 0; //temporary variable holds the max pair's value
  for(int i= 0; i< ivec.size(); i++){  
    if(ivec[i] > max1){
      max2=max1;
      max1= ivec[i];
    }
    else if(ivec[i] > max2){
      max2= max1;
    }
  }
  int max= max1 * max2;
  return max; //return the result
}

//Driver Code:-  
int main(){
  int c; //Declaration for how many numbers user will type
  cin>>c; //taking how many number user need to type
  vector<int>ivec(c); //declaration and defination of vector ivec

  for(auto &i : ivec){ //taking input in the vector
    cin>>i;
  } 
      
  cout<<algo(ivec)<<endl; //result

  return 0;
}
  
