//Write a C program to accept the a color code for the colours of the rainbow and display its name. And it should also ask the programmer whether he/she wants to continue. The program should be repeatedly executed as long as user's choice is 1.
#include <stdio.h>
main(){
    int cc,v;
    start:
        printf("1\n");
        printf("2\n");
        printf("3\n");
        printf("4\n");
        printf("5\n");
        printf("6\n");
        printf("7\n");
        printf("Enter cc");
        scanf("%d", &cc);
        switch(cc){
            case 1:
                printf("Violet\n");
                break;

            case 2:
                printf("Indigo\n");
                break;

            case 3:
                printf("Blue\n");
                break;

            case 4:
            printf("Green\n");
            break;

            case 5:
                printf("Yellow\n");
                break;

            case 6:
                printf("Orange\n");
                break;

            case 7:
                printf("Red\n");
                break;

            default:
                printf(" You have chosen wrong color code");
                break;
            }
            printf("It you don't want to continoue press 1");
            printf("It you want to continoue press v");
            scanf("%d",&v);
            if(v!=1);
    goto start;
    printf("color =%d",cc);
}