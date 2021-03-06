//By shubahrthak
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class String //Class declaration and defination 
{
private:
  char str[110]; //class member
public:
  void accept_string() // member function for taking input
  {
    cout<<"\n Enter String: ";
    cin>>str;
   }
  
 void display_string()
  {
    cout<<str;
  }

  String operator+(String x)  // overloading + operator using member function

  {
    String s; //stores the concatinated string
    strcat(str,x.str); // concatinate the obj1 string and obj2 string using strcat
    strcpy(s.str,str); // copy the string concatinated value into s
    return s; // return the concatinated value back to the main function
  }
};

//Driver Code
int main()
{
        String str1, str2, str3;
        str1.accept_string(); //taking input string from obj1
        str2.accept_string(); //taking input string from obj2
        cout<<"\n ----------------------------------------------";
        cout<<"\n\n First String is:  ";
        str1.display_string();   //Displaying First String
        cout<<"\n\n Second String is:  ";
        str2.display_string();  //Displaying Second String
        cout<<"\n ----------------------------------------------";
        str3=str1+str2;         //String is concatenated. Overloaded '+' operator
        cout<<"\n\n Concatenated String is:  ";
        str3.display_string();

        return 0;
}
