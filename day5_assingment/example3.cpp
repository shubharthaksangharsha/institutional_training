#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ifstream f1;
  char fname[50];
  char ch;
  cout<<"Please enter a file name: ";
  cin>>fname;
  f1.open(fname, ios :: in);
  if(f1.fail()){
    cerr<<"NO such file exists....\n";
    exit(1);
  }

  while(!f1.eof()){
    cout<<"At position:"<<f1.tellg();
    f1>>ch;
    cout<<",\t character: "<<ch<<endl;
  }
  f1.close();

  return 0;
}
  
