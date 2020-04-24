/*
Write a C program to print the following Pattern
*
* *
* * *
* * * *
* * * * *
*/
#include <stdio.h>
main(){
    char a='*';
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%c", a);
        }
        printf("\n");
    }
}