#include<iostream>
using namespace std ;
class node {
public :
int data ;
node* next ;

node(int d) {
data =d;
next = NULL;
}
};

class stack {
    node*head;
    int capacity ;
    int currsize;
    
    public :
    stack (int c) {
        capacity =c ;
        currsize = 0;
        head =NULL;
    }
    bool isFull () {
        return currsize==capacity;
    }

    bool isEmpty () {
        return head == NULL;
    }

    void push (int data) {
        if(currsize==capacity) {
            cout<< "OVERFLOW\n";
            return;
        }

        node*temp = new node (data) ;
        temp->next = head ;
        head = temp ;
        currsize++;
    }

    void pop () {
        if(head ==NULL) {
            cout<< "OVERFLOW\n";
            return ;
        }
        node*temp = head;
        head= head->next ;
        temp->next =NULL;
        delete temp;  
        return ;  
    }
    int getTop () {
        if (head == NULL) {
            cout<<"OVERFLOW\n";
            return INT16_MIN;
        }
        return head->data;
    }

    int size () {
        return currsize ;
    }

void print() {
    node*temp =head ;
    while(temp != NULL) {
        cout<< temp->data << " " ;
        temp= temp->next;
    }
    cout<<endl ;
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
//cout << s.getTop() <<endl;

cout<< "IS STACK IS EMPTY :: " << s.isEmpty() <<endl ;
cout<< "THE SIZE OF THE STACK :: " << s.size() <<endl;
cout<< "IS STACK IS  FULL :: " <<s.isFull() <<endl;


stack st (5);
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);

st.print();

st.pop();
st.print();
st.pop();
st.pop();
st.print();

return 0;}