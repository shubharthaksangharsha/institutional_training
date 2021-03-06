// Online C compiler to run C program online

#include <iostream>
using namespace std;
int MAXSIZE = 8;
int stack[8];
int top = -1;
int isempty()
{
if(top == -1)
return 1;
else
return 0;
}
int isfull()
{
if(top == MAXSIZE)
return 1;
else
return 0;
}
int peek() {  return stack[top];
}
int pop() {
int data;  if(!isempty()) {  data = stack[top];  top = top - 1;  return data;
}
else { printf("Could not retrieve data, Stack is empty.\n"); }
 return 0;
}

int push(int data)
{
if(!isfull())
{
top = top + 1;
stack[top] = data;
 return 0;
}
else
{
printf("Could not insert data, Stack is full.\n");
 
 return 1;
 }
}
int Top(){
  if(top == -1){
    cout<<"NO elements in stack"<<endl;
    return -1;
  }
   return stack[top];
}
int main() {
// push items on to the stack  push(3);
push(5);
push(9);
push(1);
push(12);
push(15);
push(17);
push(18);
push(19);
push(29);
 
printf("Element at top of the stack: %d\n" ,peek());  printf("Elements: \n");

 
 while(!isempty()) {
   int data = pop();
   cout<<data<<endl;

 }
 cout<<"*************"<<endl;
  
printf("Stack full: %s\n" , isfull()?"true":"false"); 
printf("Stack empty: %s\n" , isempty()?"true":"false");
pop();
cout<< peek();
return 0;
 
}


