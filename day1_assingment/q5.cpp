//by Shubhartthak
//Create classes that capturebank customersandbank accounts. A customer has a first and last name. An account has a customer and a balance. Make objects for two accounts held by the same customer.
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Bank_customer{
  string firstname,lastname;
public: Bank_customer(){
    firstname = "Shubharthak";
    lastname = "Sangharsha";
  }
  string get_firstname(){
      return firstname;
  }
  string get_lastname(){
  		return lastname;
  }
};
class Bank_account{
  double balance;
  Bank_customer customer;
public:
  Bank_account(){
    balance = 123283;
  }
  
  int get_balance() {
  	return balance;
  }
  void result(){
    cout << "First name: "<< customer.get_firstname()<<" " ;
    cout<< customer.get_lastname()<< endl;
    cout<<"Customer's Balance: "<< balance<<endl;
  }
};  
  
int main(){
  Bank_account b1,b2;
  b1.result();
  cout << endl;
  b2.result();
  return 0;
}
  
