#include<iostream>
using namespace std;

class queue{
    int *arr;
    int front;
    int curr;
    int size;

    public:
    queue(int capacity) {
        this->size = capacity;
        arr= new int[size];
        front=0;
        curr=0;
    }

    void push(int element) {
        if(curr==size) {
            cout<<"Overflow\n";
            return;
        }
        else{
            arr[curr]=element;
            curr++;
        }
    }

    void pop() {
        if(front==curr) {
            cout<<"Underflow\n";
            return;
        }
        else{
            front++;
        }
    }

    int top() {
        if(front==curr){
            cout<<"Queue is Empty";
            return -1;
        }
        else{
            return arr[curr-1];
        }
    }

    bool Empty() {
        if(front==curr) { return true; }
        else{ return false; }
    }

    void print() {
        for(int i=front; i<curr; i++) {
            cout<<arr[i] <<" ";
        }
        cout<<endl;
    }

};

int main () {
    queue q(3);

    q.push(1);
    q.push(2);
    q.push(3);

    q.print();

    cout<< q.top()<<endl;

    q.push(4);
    q.print();

    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.pop();
    q.top();

}