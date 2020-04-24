#include <stdio.h>
main(){
    char name[20];
    int ktimes,i;
    printf("What is your name?\n");
    gets(name);
    printf("How many lines to print your name\n");
    scanf("%d", &ktimes);
    i=0;
    while(i<ktimes){
        puts(name);
        i++;
    }
}