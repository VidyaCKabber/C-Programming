//Doing add and sub and the process will contintinoue
#include<stdio.h>
int main( ){
    int a,b,c,choice;
    while(choice!=3){
        printf("\n 1. Press 1 for addition");
        printf("\n 2. Press 2 for subtraction");
        printf("\n 3.press 3 for Exit");
        printf("\n Enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter 2 numbers");
                scanf("%d%d",&a,&b);
                c=a+b;
                printf("ans= %d",c);
                break;
            case 2:
                printf("Enter 2 numbers");
                scanf("%d%d",&a,&b);
                c=a-b;
                printf("ans= %d",c);
                break;
            default:
                printf("you have passed a wrong key");
                printf("\n press any key to continue");
        }
    }
}