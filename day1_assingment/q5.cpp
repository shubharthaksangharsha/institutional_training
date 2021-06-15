//by Shubhartthak
//Create classes that capture bank customers and bank accounts. A customer has a first and last name. An account has a customer and a balance. Make objects for two accounts held by the same customer.
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Bank_customer{
  string firstname,lastname;
public:
  void name_input(){
    cout<<"Please enter customer's first name: ";
    cin>>firstname;
    cout<<"Please enter customer's last name: ";
    cin>>lastname;
  }
  void name_output(){
    cout<<"Customer's first name: " << firstname<<endl<<"Customer's last name: "<<lastname<<endl;
  }
};
class Bank_account: public Bank_customer{
  double balance;
public:
  void input(){
    cout<<"Please enter customer's balance: ";
    cin>>balance;
  }
  void output(){
    cout<<"Customer's balance: "<<balance<<endl;
  }
};  
  
int main(){
  Bank_account obj1;
  obj1.name_input();
  obj1.input();
  obj1.input();
  obj1.name_output();
  obj1.output();

  return 0;
}
  
