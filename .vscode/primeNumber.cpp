#include<iostream>
using namespace std;
int main() {
int n;
cout<< "ENTER THE NUMBER :: ";
cin>>n;

   if(n==2) {
    cout<< "THE NUMBER IS PRIME ";
   }


int b=0;
for(int i=2; i<n; i++) {
   
    if(n%i !=0) {
        b++ ;
    }
    else{
        cout<< "THE NUMBER IS NOT PRIME \n";
        return 0;
    }
}

if(b>0) {
    cout<<"THE NUMBER IS PRIME" ;
}


return 0;}