#include<iostream>
#include<vector>
using std::cout;
using std::vector;
using std::cin;

int main(){
  int c;
  cin>>c;
  vector<int> ivec(c); 
  
  for(auto &i : ivec){ //for taking input and adding it into vector 
    cin>>i;
  }

  for(int i: ivec){ //displaying the vector 
    cout<<i<< "\t";
    }
 

  return 0;
}
