   // QUEUES USING STL
#include<iostream>
#include<queue>
using namespace std;
int main () {

//CREATING QUEUE 
queue<int> q;

//ENTER DATA IN THE QUEUE 
q.push(1);
q.push(2);
q.push(3);
q.push(4);

//FOR SIZE OF THE QUEUE
cout<< "THE SIZE OF THE QUEUE :: "<< q.size() <<endl ;

//REMOVAL OF DATA IN QUEUE
q.pop();

cout<< "THE SIZE OF THE QUEUE AFTER REMOVAL OF THE DATA :: " << q.size() <<endl ;

//EMPTY
if (q.empty()) {
    cout<< "QUEUE IS EMPTY \n ";
}
else {
    cout<< "QUEUE IS NOT EMPTY \n";
}

cout<< "IS MY QUEUE IS EMPTY :: " << q.empty() ;

//FRONT & BACK OF THE QUEUE 
cout<< "THE FRONT OF THE QUEUE IS = " << q.front() <<endl;
cout<< "THE LAST ELEMENT OF THE QUEUE IS = " << q.back() <<endl;

             //CREATING DOUBLY ENDED QUEUE 
deque <int> d;

//ENTERING DATA IN THE FRONT OF THE DOUBLY QUEUE
d.push_front(5);
d.push_front(6);

//ENTERING DATA IN THE BACK OF THE DOUBLY QUEUE 
d.push_back(7);
d.push_back(8);

//FORNT & BACK OF THE DOUBLY QUEUE 
cout<< "THE FRONT ELEMENT OF THE DOUBLY QUEUE = " << d.front() <<endl ;
cout<< "THE LAST ELEMENT OF THE DOUBLY QUEUE = " << d.back() <<endl ;

//REMOVAL OF THE DATA FROM THE FRONT 
d.pop_front() ;
cout<< "THE FRONT ELEMENT OF THE DOUBLY QUEUE AFTER REMOVAL FROM FRONT = " << d.front() <<endl ;

//REMOVAL OF THE DATA FROM THE LAST OF THE DOUBLY QUEUE
d.pop_back() ;
cout<< "THE FRONT ELEMENT OF THE DOUBLY QUEUE AFTER REMOVAL FROM BACK = " << d.back() <<endl ;

if (d.empty()) {
    cout<< "DOUBLY QUEUE IS EMPTY \n ";
}
else {
    cout<< "DOUBLY QUEUE IS NOT EMPTY \n";
}


return 0;}