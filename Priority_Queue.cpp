#include<iostream>
#include<queue>
using namespace std;
int main () {

    // Max priorty queue =>

    priority_queue<int>q;

    q.push(5);  //5
    q.push(2);  //5 2
    q.push(6);  //5 2 6
    q.push(4);  //5 2 6 4

    cout<<q.size()<<endl;

    // poping will be in the way of max first => 6 5 4 2

    for(int i=0; q.empty()!=true; i++) {
        int val = q.top();
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;


    //  Min priorty queue =>

    priority_queue <int,vector<int>,greater<int> > p;

    p.push(5);  //5
    p.push(2);  //5 2
    p.push(6);  //5 2 6
    p.push(4);  //5 2 6 4

    cout<<p.size()<<endl;

     // poping will be in the way of min first => 2 4 5 6

    for(int i=0; p.empty()!=true; i++) {
        int val = p.top();
        cout<<p.top()<<" ";
        p.pop();
    }

}