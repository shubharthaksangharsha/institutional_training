//By Shubharthak
#include<iostream>
#include<vector>
using namespace std ;

//aglorithim 
int algo(std::vector<int>ivec){ //function declaration and defination 
  int max = 0; //creating temp variable to store the value 
  for(int i= 0; i< ivec.size()-1; i++){ 
    for(int j= i+1; j<ivec.size(); j++){
       if((ivec[i]*ivec[j]) > max)
	 max = ivec[i] * ivec[j];
    }
  }
  return max;
}

//Driver Code:-
int main(){
  //variable declarations
  int c; 
  cin>>c; //for taking number of input values
  vector<int>ivec(c); //creating vector for adding numbers

  for(int &c : ivec){
    cin>>c;
  }
  
  cout<<algo(ivec)<<endl; //result 
  
  return 0;
}

 
