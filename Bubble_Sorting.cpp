#include<iostream>
using namespace std;

void Bubble_sorting (int arr[], int n ){
    for(int i=0 ; i<n ; i++) {
        for(int j=i+1 ; j<n; j++) {
            if(arr[i]>arr[j]) {
                arr[i] = arr[i] + arr[j] ;
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    
}

void print(int arr[] ,int n) {
     for(int i=0 ; i<n; i++) {
        cout<<arr[i] <<" ";
    }

}
int main() {

int n;
cout<<"Enter the size of the array :: ";
cin>>n;

int arr[n];
cout<<"Enter the elements => \n";
for(int i=0; i<n ;i++) {
    cin>>arr[i];
}
Bubble_sorting(arr , n) ;
print(arr ,n) ;
   
 return 0;
}