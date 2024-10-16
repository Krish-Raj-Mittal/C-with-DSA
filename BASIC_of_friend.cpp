#include<iostream>
using namespace std ;
class  number{
    int a,b;

    public :
    void set (int x ,int y) {
        a=x;
        b=y;
    }

    void get () {
        cout << "the 1st number = " <<a <<endl ;
         cout << "the 2nd number = " <<b <<endl ;
    }

    friend void sum (number o1);
};

void sum (number o1) {
    cout << o1.a + o1.b;

}


int main () {
number n1 ; 
n1.set(50,40);
n1.get();    
 sum(n1);
return 0 ;}