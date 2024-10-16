#include<iostream>
using namespace std ;
class node {
    public :
    int data ;
    node* next ;

    node (int d) {
        data = d ;
        next = NULL ;
    }
};

class queue {
    node* head ;
    node* tail ;
    int size ;

    public :
    queue () {
        head = NULL ;
        tail = NULL ;
        size = 0 ;
    }

    //DATA INSERATION
    void enqueue (int data) {
        node* newNode = new node (data) ;

        if (head == NULL) {
            //ll is empty
            head = tail = newNode;
        }
    
        else {
            tail->next = newNode;
            tail = newNode ;
    }
       size++  ;
    }


//REMOVAL OF DATA 
void dequeue () {
    if (head ==NULL) {
        //ll is empty 
        return ;
    }
    else {
        node*temp = head ;
        head = head->next ;
        if(head==NULL) {
            tail = NULL ;
        }
        temp->next =NULL ;
        delete temp;

        size--;
    }
}

//PRINT
void print () {
    node*temp = head ;

    while (temp != NULL) {
        cout<< temp-> data << " " ;    
        temp = temp ->next ;
    }
    cout<<endl ;
}

int length () {
    return size ;
}

};

int main () {

queue q ;
q.enqueue(1);
q.enqueue(2);
q.enqueue(3);
q.enqueue(4);

q.print() ;
cout<< "THE SIZE OF THE QUEUE IS = " << q.length() <<endl;

q.dequeue() ;
q.print();
cout<< "THE SIZE OF THE QUEUE AFTER REMOVAL IS  = " <<q.length() <<endl;

q.dequeue();
q.dequeue();
q.print();
cout<< "THE SIZE OF THE QUEUE AFTER REMOVAL IS  = " <<q.length() <<endl;

return 0 ;}