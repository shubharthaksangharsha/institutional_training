#include<iostream>
#include<vector>
using std::cout;
using std::vector;

int argmax(vector<int> vec){
  int arg_max=0;
  for(int i = 0; i < vec.size(); i++){
    if(vec[i] > vec[arg_max]){
      cout<<"hi";
      arg_max= i;
    }
  }
  return arg_max;
}

int main(){
  vector<int> vec={2,32,9,5};

  cout<< argmax(vec);

  return 0;
}

  
