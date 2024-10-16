#include<iostream>
#include<stdio.h>
using namespace std;
// void sum (int b[]) { cout<<b[0] +1<<endl;
// cout<< b[1]+10<<endl;
// cout<<b[2]+100<<endl;
//  }

// int main () {
// int arr[3]={4,5,6};
// sum(arr);
// return 0;}

void  increase (int b[],int c ,int n) {
    for(int i=0; i<c; i++) {cout<<b[i] +n;} 
}
int main () {
    int c, n, arr[c];
    cin>>c;
    cin>>n;
    
    for(int i=0; i<c;i++) {
        cin>>arr[i];
    }

  //  void increase ();
    increase(arr,c,n);

return 0;}