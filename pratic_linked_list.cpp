# include <iostream>
using namespace std;
class node {
    public :
    int data ;
    node* next;

    node (int value) {
        data = value;
        next = NULL ;
    }
};

void InsertAtHead (node* & head , int data) {
    node*temp = new node (data);
    temp->next =head;
    head=temp;
} 

//1st method to bulid insert at tail function --->
void InsertAtTail (node*& tail , int data) {
    node*temp= new node (data) ;
    tail->next = temp ;
    tail= temp ;
}


//2nd method to bulid insert at tail function ---> (not good for the time orientation of the code)
//  void InsertAtTail (node*&head , int data) {
//     node*node_to_insert  =new node(data);
//     node* temp =head ;

//     while(temp-> next != NULL) {
//         temp= temp->next ;
//     }
//     temp->next =  node_to_insert ;
//  }


void InsertAtAnyPosition (node* &head, int position, int data) {
    
    if(position ==1 ) {
        InsertAtHead (head, data) ;
        return ;
    }
    
    node*temp = head ;

    int cnt=1;

    while(cnt < position-1) {
        temp= temp->next ;
        cnt++;
    }

    node* nodeToinsert  =new node (data) ;
    nodeToinsert-> next = temp->next ;
    temp->next = nodeToinsert ;
    
}

void update (node* &head , int position , int value) {
    node*temp = head;
    int current_position =1;
    while(current_position !=position) {
        temp=temp->next ;
        current_position ++;
    }
    temp->data =value ;
    
    }

void deleteAtHead (node*&head) {
    node*temp =head; //node to be deleted
    head=head->next;
    delete temp ;
    //we can also use- free operator like this---->
   // free(temp);
}

void deleteAtTail (node*& head) {
    node*second_last =head;
    
    while(second_last->next->next !=NULL) {
        second_last = second_last->next ;
    }

//now second last node points to second last node----

node*temp =second_last->next; //temp points to the last node which we want to delete 
second_last->next = NULL;
delete (temp);
}


void deleteAtAnyPosition(node*& head, int position) {

if(position == 1) {
    deleteAtHead(head) ;}

else { node*previous = head ;       
        int current_pos =1 ;
 while(current_pos != position -1 ) {  previous = previous->next ; current_pos++;  }

    node*temp =previous->next ;
    previous ->next = previous->next->next ; 
    delete (temp);

}}

void print (node* & head) {
     node * temp = head ;
      while (temp != NULL) {
        cout<<temp ->data << "-> " ;
        temp = temp -> next ;
      }

      cout<<endl ;
}

int main () {
 node* node1 =new node (20);
 node * head = node1 ;
 node *tail = node1 ;
 print(head);

 InsertAtHead (head , 40);
 InsertAtHead (head , 400); 
 print(head);

InsertAtTail(tail, 500);
print(head);
InsertAtTail(tail, 900);
print(head);

InsertAtAnyPosition(head, 2 , 30);
print(head);
InsertAtAnyPosition(head,2,888);
print(head);

update(head, 2 ,99);
print(head);


deleteAtHead(head);
print(head);
deleteAtHead(head);
print(head);

deleteAtTail(head);
print(head);
deleteAtTail(head);
print(head);

deleteAtAnyPosition(head, 2) ;
print(head);
deleteAtAnyPosition(head,2);
print(head);

//if the data is allocate in the position then code will neither delete or deallocate memmory but it will work 
// deleteAtAnyPosition(head,5);
// print(head);

return 0;}