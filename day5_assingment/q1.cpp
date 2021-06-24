#include<iostream>
using namespace std;

class WaveType{
  double wavelength;
public:
  void  input(){
    cout<<"The program determines the type of electromagnetic wave\n";
    cout<<"Please enter the wavelength in meters of an electromagnetic wave: ";
    cin>>wavelength;
  }

  void display(){
    if(wavelength <=1e-11)
      cout<<"Gamma Ray Radiation Type \n";
    else if(wavelength <=1e-8)
      cout<<"X-Ray Radiation Type \n";
    else if(wavelength <=4e-7)
      cout<<"Ultraviolet Radiation Type \n";
    else if(wavelength <=7e-7)
      cout<<"Visible Light Radiation Type \n";
    else if(wavelength <=1e-3)
      cout<<"Infrared Radiation Type \n";
    else if(wavelength <= 1e-2)
      cout<<"Microwave Radiation Type \n";
    else
      cout<<"Radio Wave Radiatation Type \n";
  }

};

int main(){
  WaveType obj;
  obj.input();
  obj.display();

  return 0;
}
