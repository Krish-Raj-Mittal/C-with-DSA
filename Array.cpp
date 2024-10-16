#include<iostream>
using namespace std ;
void print (int a[]) {
    for(int i=0 ; i<5 ;i++) {
        cout << a[i]  << "  ";
    }
    cout<<endl ;
    }

void change (int a[]) {
    for(int i=0 ; i<5; i++) {
        a[i] = 0;
    }
    cout<<"ARRAY AFTER CHANGING VALUE INSIDE change FUNCTION : \n"; 
    print(a) ;
cout<<endl;
}

void intchange (int l) {
    l = 5 ;
    cout << "INTEGER IN FUNCTION intchange : " <<l <<endl;
}

int main () {
int a[5];
a[0]= 1;
a[1]= 2;
a[2]= 3;
a[3]= 4;
a[4]= 5;

cout<<"ARRAY BEFORE CHANGES \n" ;
print(a);

change (a);
cout<<"ARRAY AFTER CHANGES ARRAY 'a' INSIDE MAIN FUNCTION \n" ;
print(a);

int l = 2 ;
cout<< "BEFORE SEND INTO intchange FUNCTION : " << l <<endl;
intchange(l) ;
cout<< "INTEGER IN MAIN FUNCTION AFTER CHANGES OWN VALUE IN intchange FUNCTION  : " << l <<endl ; 

}