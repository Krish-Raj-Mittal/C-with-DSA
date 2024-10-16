#include <iostream>
using namespace std;
class node {
public :
int data ;
node* next ;

node(int d) {
    data= d;
    next= NULL;
}};

void InsertAtHead(node*&head, int data) {
    node*nodeToInsert =new node(data);
    node*tail=head;
    while(tail->next != head) {
        tail= tail->next;
    }
//now tail is pointing to my last node
    tail->next= nodeToInsert;
    nodeToInsert->next = head;
    head = nodeToInsert;
}

void check_circular (node*&head) {
    node*temp= head ;
    for(int i=0 ; i<=20 ; i++) {
        cout<<temp->data<< " -> " ;
        temp= temp->next;
    }
    cout<<endl;
}

void insertAtTail (node*&head,int data) {
    node*tail =head;
    node*nodeToInsert = new node (data);
    while(tail->next != head) {
        tail= tail->next;
    }
    //tail point to last node
    tail->next = nodeToInsert;
    nodeToInsert->next = head ;
    }

void insertAtAnyPosition(node*&head, int position ,int data) {
   if(position ==1) { InsertAtHead(head,data); }

else { node*temp = head;
    node* nodeToinsert = new node (data) ;
    int curr =1 ;
    while(curr != position-1) {
        temp =temp->next;
        curr++;
    }

    nodeToinsert->next = temp->next;
    temp->next= nodeToinsert;
}}
 
void deletionAtHead (node*&head) {
    node*temp= head;
    node*tail= head ;
    while(tail->next != head)  {
        tail= tail->next;
    }   
    head= head->next;
    tail->next= head;
    delete temp;
}

void deletionAtTail(node*&head) {
    node*sec_last = head;

    while(sec_last->next->next != head) {
        sec_last= sec_last->next ;
    }
    node*temp = sec_last->next ;
    sec_last->next = head ;
    delete temp;
}

void deletionAtAnyPosition (node*&head , int position) {
    if(position==1) {deletionAtHead(head); return;}
    
    node*temp= head;
    for(int i=1 ; i!= position-1; i++) {
        temp=temp->next;
    }
    node* to_deleie = temp->next;
    temp->next= temp->next->next;
    delete to_deleie;

}

void print(node* head) {
    node*temp= head;
do { cout<<temp->data<<" ";
    temp= temp->next;
    } while (temp != head);

    cout<<endl;
}

int main () {
node*new_node = new node(1);
node*head= new_node;
new_node->next = head ;
print(head);

InsertAtHead(head,2);
print(head);
InsertAtHead(head,3);
print(head);
InsertAtHead(head, 4);
print(head);

check_circular(head);

insertAtTail(head,5);
print(head);
insertAtTail(head,6);
print(head);

insertAtAnyPosition(head,2,7);
print(head);
insertAtAnyPosition(head,3,8);
print(head);
insertAtAnyPosition(head,1, 9);
print(head);

deletionAtHead(head);
print(head);
deletionAtHead(head);
print(head);

deletionAtTail(head);
print(head);
deletionAtTail(head);
print(head);

deletionAtAnyPosition(head,2);
print(head);
deletionAtAnyPosition(head,4);
print(head);
deletionAtAnyPosition(head, 1);
print(head);

return 0;}