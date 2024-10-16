#include<iostream>
using namespace std;

class node{
    public :
    int data ;
    node* next ;

    node (){

    }
    node (int val) {
        data= val;
        next = NULL ;
    }

};

class ll {
    public :
     void inserthead (int data , node* & head) {
    node* temp = new node(data);
    temp->next = head ;
    head = temp ;
};

void print (node*& head) {
    node* temp = head ;
    while(temp != NULL) {
        cout<< temp->data <<"-> ";
        temp =temp->next;
    }
    cout<<endl;
}
};

int main () {
    
    node * head  = new node (20);
    
    ll n1;
    n1.print(head);
    n1.inserthead(30,head);
    n1.print(head);
    n1.inserthead(40,head);
    n1.inserthead(50,head);
    n1.print(head);

    ll n2;
    n2.inserthead(500,head);
    n2.print(head);
    n2.inserthead(600,head);
    n2.print(head);
}