#include<iostream>
using namespace std;
class node {
    public :
    int data;
    node*next;
    node (int value) {
        data=value;
        next= NULL;
    }
};

void InsertAtHead (node* & head , int data ) {
    node *temp = new node (data);
   // (*temp). next= head;
    temp->next=head;
    head=temp ;
}

void InsertAtTail (node* & tail , int data) {
    node*temp =new node (data) ;
    
    tail->next =temp ;
    tail =temp ;
}

void InsertAtAnyPosition (node*tail, node* & head, int position , int data) {
   
   // insert at start  (1st position)
    if (position ==1) {InsertAtHead(head , data); 
                         return ; }
    node*temp = head ;
    int cnt= 1;

    while (cnt< position -1 ) {
        temp =temp ->next;
        cnt++;}


//insert at tail 
if(temp-> next == NULL) {
    InsertAtTail(tail,data);
     return ;
}

         //CREATED A NEW NODE FOR DATA 
    node* nodeToInsert  = new  node (data);
    nodeToInsert->next =temp->next ;
    temp->next = nodeToInsert ;
    
}

void update_node(node*& head ,int position ,int val){ 
node* temp =head ;
int current_pos = 1;
while (current_pos != position) {
temp = temp->next ;
current_pos++;
}

temp->data =val ;
}

void deleteNode(int position , node*& head) {
    
    if(position ==1) {
        //deleting from first or start of the node
        node* temp= head;
        head = head->next ;
        //memory free from start 
        temp->next =NULL;
        delete temp;
    }
    else {
        //deleting  from the any middle or last node;
        node*current =head;
        node*pervious=NULL;

        int cnt=1;
        while(cnt<=position -1 ) {
            pervious =current;
            current =current -> next;
            cnt++;

        }

        pervious->next = current->next;
        current->next =NULL ;
        delete current;

    }
}

void print (node* & head ) {
    node* temp = head ;
    while (temp!= NULL) {
        cout<< temp->data  << "  ";
    temp=temp->next;
    }
    cout<<endl;
}

int main () {
    //object Method
    //  node p(20);
    // node* head= & p; //this method (through object method) same as given(pointer method)--->
    
    //pointer method
    node * p  = new node (20);
    node* head=  p;
    node* tail= p;

 //insert data at head (forward)
    InsertAtHead(head, 90);
    InsertAtHead(head, 40);
    print(head);


// insert data at tail (backward)
    InsertAtTail(tail ,30);
    print(head) ;
    InsertAtTail(tail ,100);
    print(head) ;
    InsertAtTail(tail ,500);
    print(head);


//insert data at any position at the in the linked list 
    InsertAtAnyPosition(tail,head,2 ,999 );
    print(head);
    InsertAtAnyPosition(tail ,head, 4 ,900);
    print(head);


//updatation in the linked list 
  update_node(head, 2 , 333);
  print(head);    

//delete or deallocate node in the linked list
deleteNode(2,head);
print(head);
deleteNode(3,head);
print(head);


return 0;}

