#include<stdio.h>
#include<iostream>
using namespace std;
int main () {

//CREATING FILE POINTER &  OPENING THE FILE AT SAME TIME  --> FILE* pointer_name = fopen ("NameOfTheFILE","r"); 
     FILE* ptr= fopen("krish.txt","r");
     
//READING / OPENING THE OPENED FILE -->
     char s[100];
    while (fgets(s,100,ptr)!= NULL) {
        printf("%s",s);
    }

//CREATING A FILE BY AUTOMATIC SYSTEM  OR CREATING FILR FOR WRITE WITH FILE POINTER  -->
    FILE* p = fopen ("system_create.txt", "w");

    //WRITING IN THE FILE--> fputs( StringToBeshown , File_Pointer);
    char q[] = "KAISA HAI AAP LOG " ;
    fputs(q,p);

    //MODIFYING OR INCLUDING MORE ANOTHER TEXT IN THE FILE -->
        char l[] = "ASA  KARTA HU KI THIK HONGA ";
        fputs(l,p);

        fclose(p);


return 0;}