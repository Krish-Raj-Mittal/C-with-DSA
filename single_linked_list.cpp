#include<iostream>
using namespace std;
class node {
public:
int data ;
node* next ;

node (int data) {
    this ->data =data ;
    next = NULL ;
}};

void InsertAtHead (node* & head , int data ) {
    node* temp= new node (data) ;
    temp->next = head ;
    head = temp ;
}

void InsertAtTail (node* &tail , int data) {
    node*temp = new node (data);
    tail->next =temp ;
    tail = temp ;    
}

void inseration (node*& tail, node* & head , int position , int data) {
if (position ==1) {InsertAtHead(head, data); return; } 
else {node*temp= head ;

    for(int i=1 ; i!= position-1; i++) {
        temp = temp->next;
    }

if (temp->next== NULL) {InsertAtTail(tail,data);}
else{
    node* insert = new node (data);
    insert->next = temp->next ;
    temp->next = insert ;
}}}

void Delete (node*& head , int position) {
node* temp = head ;
if (position == 1) {
    head = head->next ;
    delete(temp);
}
else {
    int curr = 1 ;
    while ( curr != position-1) {
        temp= temp-> next ;
        curr ++ ;
    }
    node*NodeToDelete  = temp->next ;
    temp->next = temp->next->next;
    delete(NodeToDelete);
}
}



void print(node* &head) {
node*temp =head ;

while (temp != NULL) {
    cout<< temp->data <<"-> ";
    temp= temp->next ;
}
cout<< "NULL " <<endl ;

}

int main () {

node n1 (20) ;
node*head = & n1;
node*tail =& n1;
print(head);

InsertAtTail(tail, 80);
print(head);
InsertAtHead(head,500);
print(head);
InsertAtTail(tail, 900) ;
print(head);
InsertAtTail(tail, 1800);
print(head);

inseration(tail,head, 2, 600) ;
print(head);
inseration(tail,head,3,55555);
print(head);
inseration(tail, head, 8 , 5556666);
print(head);
inseration(tail, head,9,28);
print(head);

InsertAtTail(tail , 22);
print(head);
InsertAtTail(tail,55);
print(head);

Delete(head, 9);
print(head);
Delete(head,3);
print(head);
Delete(head,1);
print(head);
}

















