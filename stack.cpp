       //STACKS USING ARRAYS

#include<iostream>
using namespace std;
class stack{
    int capacity;
    int*arr ;    
    int top;
    
    public:
    stack(int c) {
        capacity = c;
        arr = new int[c] ;
        top=-1;
    } 

    void push(int data) {
        if(top == capacity-1) {
            cout<< "OVERFLOW\n";
            return;
        }
        else{  top++;
                arr[top] =data ;
     
            }    }


    int pop () {
        if(top== -1) {
            cout<<"UNDERFLOW";
            return INT16_MIN ;
        }
        else {
            top--;
        }
    }

    int  getTop() {
        if( top== -1) {
            cout<<"UNDERFLOW\n";
            return 0;
        }
        else {return arr[top]; }
    }

    bool isEmpty () {
        return top == -1 ;
    }

    int size () {
        return top +1;
    }

    int isFull () {
        return top == capacity -1 ;
    }

};

int main () {

stack s (6);

s.push(1);
s.push(2);
s.push(3);

cout<< s.getTop()<< endl ;

s.push(4);
s.push(5);
cout<<s.getTop() <<endl;

s.push(6);
cout<< s.getTop()<< endl ;

s.push(7);
cout << s.getTop() <<endl;

cout<< "IS STACK IS EMPTY :: " << s.isEmpty() <<endl ;
cout<< "THE SIZE OF THE STACK :: " << s.size() <<endl;
cout<< "IS STACK IS  FULL :: " <<s.isFull() <<endl;

return 0; }