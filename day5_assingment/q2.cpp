#include<iostream>
#include<math.h>
using namespace std;

class Calculate_BMI{
  double bmi,height,weight;
  public:
  void input(){
    cout << "Enter weight(in pounds): " << endl;
    cin >> weight;
    cout << "Enter height(in inches): " << endl;
    cin >> height;

  }
  void compute(){
    bmi = weight * (703/ pow(height,2));
  }

  void display(){
        if (bmi >= 18.5 && bmi <= 25)
        cout << "Weight optimal." << endl;
    else if (bmi >= 0 && bmi <= 18.5)
        cout << "Weight underweight." << endl;
    else if (bmi >= 25)
        cout << "Weight overweight." << endl;
  }

};

int main(){
  Calculate_BMI obj;
  obj.input();
  obj.compute();
  obj.display();

  return 0;
}

    
    
  
  
