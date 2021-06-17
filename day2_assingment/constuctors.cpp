//by shubharthak
//demonstrating all types of constructors  
#include<iostream>
using namespace std;

class student{ //declaration and defination of class student

	string name; //data members 
	int uid;
	int height;
	int weight;	
public: //making public 

  student(){ //default constructor 
	  name = "Default Name ";
	  uid = 0 ;
	  height =  0 ;
	  weight = 1 ;
  }
        student(string a, int b, int c, int d){ //parametyzed constructor 
	
	name = a;
	uid = b;
	height= c;
	weight= d;
	}
	
	student( student &x){	// copy constructor 
	
	name = x.name;
	uid = x.uid;
	height = x.height;
	weight = x.weight;
	
	}
	
	void display(){	//display function
	  cout<<"Name of student : "<<name<<endl<<"UID of student is : "<<uid<<endl<<"Height of student is : "<<height<<"cm"<<endl<<"Weight of student is : "<<weight<<"kg"<<endl<<endl;
	
	}
        
};


//Driver code:-
int main(){
  student s1;
  student s2( "Shubharthak",6872,170,52);
  student s3(s2);

  int i ;
  cout<<"Please choose the constructor you want to display: "<<endl;
  cout<<"for Default constructor, press (1) from the keyboard" <<endl;
  cout<<"for Paramatyzed constructor, press (2) from the keyboard" <<endl;
  cout<<"for Copy constructor, press (3) from the keyboard" <<endl;
  cout<<"**************************************************"<<endl;
   while(cin>>i){ //calling while loop and will take input till EOF or wrong input!
     if(i==1) //for calling default constructor
   {
	cout<<"Default constructor"<<endl;
	s1.display();
	cout<<endl;
	}
     
     else if(i ==2){  //for calling paramatyzed constructor 
	cout<<"Paramytyzed constructor" <<endl;
	s2.display();
	cout<<endl;
	}
     
     else if (i == 3) { //for calling copy constructor 
	cout<<"Copy constructor" <<endl;
	s3.display();
	cout<<endl;
	}
     
     else{     //for wrong input 
	cerr<<"Wrong Input!!"<<endl;
	return -1;
	}
	
	}
	return 0;

	}
