#include<iostream>
//here below is stack inbuilt libaray in C++ / header file in C++ --> which can make easy to stack in C++ ---->
#include<stack>
using namespace std;
int main () {


//CREATION OF STACK -->
   //{create stack-->  stack <data type> name_of_stack }
        stack <int> s;

//ENTERING THE DATA IN STACK THROUGH PUSH FUNCTION
    s.push(2);
    s.push(3);

//REMOVING THE DATA FROM TOP OF THE STACK USING POP FUNCTION
    s.pop();

//TO PRINT TOP ELEMENT OF THE STACK
    cout<<"THE TOP ELEMENT OF THE STACK IS : "<< s.top() <<endl;


//FOR LOOK STACK IS EMPTY OR NOT 
    if(s.empty()) {
        cout<< "STACK IS EMPTY " <<endl;
    }
    else{
        cout<< "STACK IS NOT EMPTY " <<endl;
    }

//FOR SIZE OF THE  STACK
    cout<< "THE SIZE OF THE STACK IS : " << s.size() <<endl ;



return 0; }