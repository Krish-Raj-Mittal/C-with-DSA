#include<iostream>
#include<stdio.h>
using namespace std ;
int main () {
//printing star rectangle pattern -->
// int n , m;
// printf("ENTER THE NUMBER OF ROWS : ");
// scanf("%d",& n);

// printf("ENTER THE NUMBER OF COLUMN : ");
// scanf("%d", & m);

// for(int i=1 ; i<=n ; i++) {
// for(int j=1 ; j<=m ; j++) {
//     printf("* ");
// }
// printf("\n");
// }

//printing star square pattern -->
// int n ;
// printf("ENTER THE NUMBER OF ROWS & COLUMN : ");
// scanf("%d",& n);

// for(int i=1; i<=n ; i++) {
//     for(int j=1; j<=n; j++) {
//         printf("* ");
//     }
//     printf("\n");
// }

//pattern printing of number rectange -->
// int n,m ;
// printf("ENTER THE NUMBER OF ROWS : ");
// scanf("%d",& n);

// printf("ENTER THE NUMBER IN THE ROWS : ");
// scanf("%d", & m);

// for(int i=1; i<=n ; i++) {
//     for(int j=1 ; j<=m; j++) {
//         printf("%d ", j);
//     }
//     printf("\n");
// }

//pattern printing of number square -->
// int n ;
// printf("ENTER THE NUMBER OF ROWS : ");
// scanf("%d",& n);

// for(int i=1; i<=n ; i++) {
//     for(int j=1 ; j<=n; j++) {
//         printf("%d ", j);
//     }
//     printf("\n");
// }


//pattern printing of star triangle (in increasing order) -->
// int n ;
// printf("ENTER THE NUMBER OF ROWS IN THE TRIANGLE : ");
// scanf("%d",& n);

// for(int i=1 ; i<=n ; i++) {
//     for(int j=1 ; j<=i ; j++) {
//         printf("* ");
//     }
//     printf("\n");
// }

//pattern printing of star trinangle (in decreasing order) / in reverse order -->
// int n ;
// printf("ENTER THE NUMBER OF ROWS IN THE TRINAGLE : ");
// scanf("%d",& n);

// for(int i=n; i>=1 ; i--) {
//     for(int j=1; j<=i ; j++) {
//         printf("* ");
//     }
//     printf("\n");
// }

//patter printing of the number triangle (in increasing order) like this --> 
// 1
// 2 2
// 3 3 3 
// 4 4 4 4
//  int n ;
// printf("ENTER THE NUMBERS IN THE TRIANGLE : ");
// scanf("%d",& n);

// for(int i=1 ; i<=n ; i++) {
//     for(int j=1 ; j<=i ; j++) {
//         printf("%d ",i);
//     }
//     printf("\n");
// }

//pattern printing 2nd of the number triangle (in increasing order in the rows) like this -->
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5 

// int n;
// printf("ENTER THE NUMBER IN THE TRIANGLE : ");
// scanf("%d", & n);

// for(int i=1 ; i<=n ; i++ ) {
//     for(int j=1; j<=i ; j++) {
//         printf("%d ",j);
//     }
//     printf("\n");
// }

//pattern printing of the triangle (in the decreasing order) like this -->
//5 5 5 5 5 
//4 4 4 4
//3 3 3 
//2 2
//1

// int n ;
// printf("ENTER THE NUMBER OF ROWS IN THE TRINAGLE : ");
// scanf("%d",& n);

// for(int i=n; i>=1 ; i--) {
//     for(int j=1; j<=i ; j++) {
//         printf("%d ", i);
//     }
//     printf("\n");
// }

//pattern printing of the number triangle (in decreasing order) like this -->
//5 4 3 2 1
//4 3 2 1
//3 2 1 
//2 1
//1

// int n ;
// printf("ENTER THE NUMBER OF ROWS IN THE TRINAGLE : ");
// scanf("%d",& n);

// for(int i=n; i>=1 ; i--) {
//     for(int j=1; j<=i ; j++) {
//         printf("%d ", j);
//     }
//     printf("\n");
// }


//pattern printing of alphabhet square
// int n ;

// printf("ENTER THE NUMBER OF ROES & COLUMN IN SQUARE : ");
// scanf("%d", &n);

// for(int i=1; i<=n ;i++) {
//     int a= 65 ;
//     char ch = a ;
//     for(int j=1; j<=n ; j++) {
//         printf("%c " , a);
//         a++;
//     }
//     printf("\n");
// }


//pattern printing of triangle of the alphabhett

// int n;
// printf("ENTER THE NUMBER OF ROWS IN TRIANGLE : ");
// scanf("%d",& n);

// for(int i=1; i<=n; i++) {
//     int a=65;
//     for(int j=1 ; j<=i; j++) {
//         printf("%c ", a);
//         a++;
//     }
//     printf("\n") ;
// }

//pattern printing of inverse triangle of the alphabhett

// int n;
// printf("ENTER THE NUMBER OF ROWS IN TRIANGLE : ");
// scanf("%d",& n);

// for(int i=n; i>=1; i--) {
//     int a=65;
//     char ch = (char)a;
//     for(int j=1; j<=i ; j++) {
//         printf("%c ", ch) ;
//         ch++;    
//     }
//     printf("\n");
// }

//making a pattern of star cross 

int n;
printf("ENTER THE NUMBER OF ROWS IN TRIANGLE : ");
scanf("%d",& n);


for(int i=1 ; i<=n ; i++) {
    for(int j=1; j<=n; j++) {
       int d= n/2 + 1 ;

       if(j==n/2 +1  || i==n/2 + 1 ) {
           printf("* ");   }
    else{
        printf(" ");
    }

    }
    printf("\n");
}


return 0;}