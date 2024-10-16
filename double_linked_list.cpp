#include<iostream>
using namespace std;
class node {
    public :
    int data ;
    node* prev ;
    node* next ;

    node(int value) {
        data =value;
        prev = NULL ;
        next = NULL ;
    }
};

void InsertAtHead (node* & head , int data) {
    node* temp = new node (data);
    temp->next = head ;
    head ->prev = temp ;
    head =temp ;
}

void InsertAtTail (node* & tail , int data) {
    node* temp = new node (data) ;
    tail->next = temp ;
    temp ->prev = tail ;
    tail= temp ;
}

void InsertAtAnyPosition (node*&head , node*&tail, int position ,int data) {
    if( position == 1) {InsertAtHead(head,data) ; return;}

        node* temp = head;

        int curr = 1;
        while (curr!= position-1) { 
            temp = temp->next ;
            curr++;
        }

            node* nodeToinsert= new node (data) ;
    
    nodeToinsert->next = temp->next ;
    temp->next->prev = nodeToinsert;
    temp->next =nodeToinsert;  
    nodeToinsert->prev= temp ;  }


void deleteAtHead (node*&head){
    node* temp=head ;
    // temp->next->prev =NULL ;
    // head = temp ->next;
    // temp->next = NULL;

     //OR WE CAN DO TO DELETE NODE AT STARTING LIKE THIS ALSO-->

     head= head->next;
     head->prev= NULL;
     delete(temp);
}

void deleteAtTail (node*&tail) {
    node*temp= tail;
    tail= tail->prev;
    tail->next = NULL ;
    delete(temp);
}

void deleteAtAnyPosition (node*& head, node*&tail, int position ) {
    if(position==1) {
        deleteAtHead(head);
    }
    else {
        int curr =1 ;
        node* temp = head ;
        while (curr !=position-1) {
            temp= temp->next;
            curr++;
        }

        if(temp->next == NULL) {
            deleteAtTail(tail);
            return;
        }

        node* nodeTodelete= temp->next; 
        temp->next= temp->next->next;
        temp->next->prev = temp;
        delete(nodeTodelete);
    }
}

void printk (node*& head) {
    node* temp =head ;
    cout<< "NULL-> ";
    while(temp != NULL) { 
        cout<<temp->data <<"-> " ;
    temp= temp->next ; }
    cout<< "NULL" <<endl ;
}

void reverse (node*& tail) {
    node* temp =tail;
    cout<< "<-NULL ";
    while(temp != NULL) {
        cout<< temp->data <<" <-";
        temp = temp->prev;
    } 
    cout<<"NULL"<<endl;
}

int main () {
 node* p = new node (1) ;
 node* head = p ;
 node* tail =p;
 printk (head);

InsertAtHead(head , 2);
printk (head);
InsertAtHead(head , 3);
printk(head);

InsertAtTail(tail , 4);
printk(head);
InsertAtTail(tail , 5);
printk(head);

InsertAtAnyPosition(head,tail,2,6);
printk(head);
InsertAtAnyPosition(head, tail,2, 7);
printk(head);
InsertAtAnyPosition(head, tail,5, 8);
printk(head);
InsertAtAnyPosition(head, tail, 7, 9);
printk(head);

deleteAtHead(head);
printk(head);
deleteAtHead(head);
printk(head);

deleteAtTail(tail);
printk(head);
deleteAtTail(tail);
printk(head);
deleteAtTail(tail);
printk(head);

deleteAtAnyPosition(head,tail,2);
printk(head);

reverse(tail);

cout<<endl<<endl<<"reverse of the linked list(doubly)\n";
printk(head);
reverse(tail);

return 0;}