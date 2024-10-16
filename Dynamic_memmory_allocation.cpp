#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main () {
    int x;
    //int*ptr=&x;
    cout<< "ALLOCATE MEMMORY TO THE INTEGER X = " ;
    cin>> x;
     
    // cout<< *ptr <<endl;
    // cout<< ptr <<endl;
    // printf("%d\n", ptr);
    // cout<< ptr <<endl;
    // printf("%p\n", &x);
    // printf("%p\n", ptr);
    // // printf("%p\n",x);
    // // printf("%p\n", *ptr);
    // printf("%d" , *ptr );

     //int *ptr = (int*)  malloc(x* sizeof(int));
    // printf("%d", *ptr) ;

    int *ptr = (int*) calloc(x, sizeof(int));

    int *r =ptr;
    for(int i=0; i<=x; i++) {
        scanf("%d" , & ptr); 
        ptr++;
    }

    int *z= r;
    for(int i=0; i<=x; i++) {
        printf("%d" ,  r); 
        r++;
    }

 
} 