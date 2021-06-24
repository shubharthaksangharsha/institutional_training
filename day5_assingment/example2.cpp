#include<iostream>
#include<fstream>

using namespace std;
int main(){
  char c, fn[10];
  cout<<"Please Enter the file name...: ";
  cin>>fn;
  ifstream in(fn);
  if(!in)
    {
      cerr<<"Error! File does not exist";
      return -1;
    }
  cout<<endl<<endl;
  while(in.eof()==0)
    {
      in.get(c);
      cout<<c;
    }

  return 0;
}
