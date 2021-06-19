#include<iostream>

#include<string>
using namespace std;
int main ( )
{
string s1 ( "good" );
string s2 ( "luck" );

cout << "The orignal string is: " << s1 << "." << endl;
cout << "The orignal string is " << s2 << "." << endl;
char *s3 = "Star";
cout << "The c-style string is " << s3 << "." << endl;
char c1 = '!';
cout << "The character constant is " << c1 << "." << endl;
string s12 = s1 + s2;
cout << "The concatenating string s1 & s2 is: " << s12 << endl;
string s1s3 = s1 + s3;
cout << "The concatenating string s1 & s3 is: " << s1s3 << endl;
string s1s3c1 = s1s3 + c1;
cout << "The concatenating string s1 & s3 is: " << s1s3c1 << endl;


}

