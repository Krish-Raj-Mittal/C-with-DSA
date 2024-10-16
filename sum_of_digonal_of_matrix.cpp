#include<iostream>
using namespace std;
int main () {
    int l,k;
    cout<< "ENTER THE NO. OF THE ROWS AND COLUMN = " ;
    cin>> l;
    k=l;

int a[l][k];
 for(int i=0 ; i<l; i++) {
    for(int j=0 ; j<k ; j++) {
        cout<<"ENTER THE ELEMENT OF THE MATRIX " <<i<<" " <<j << "= ";
        cin>> a[l][k];
            } }

for(int i=0 ; i<l; i++) {
    for(int j=0 ; j<k ; j++) {
        cout<< a[l][k] <<endl;
            } }


int sum= 0;
for(int i=0 ; i<l; i++) {
    for(int j=0 ; j<k ; j++) {
        if(i==j) {
            sum= sum+a[l][k];
        }
            } }


cout<<"THE SUM OF THE DAIGONAL OF THE MATRIX =  "<<sum;


return 0;}