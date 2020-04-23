#include <stdio.h>
main(){
    int a;
    char S,A,B,Y,F;
    printf("Enter a charecter");
    printf("1 S\n");
    printf("2 A\n");
    printf("3 B\n");
    printf("4 Y\n");
    printf("5 F\n");

    printf("Enter the grade code");
    scanf("%d", &a);
    switch(a){
        case 1:
            printf("Enter S\n");
            scanf("%d",&S);
            printf("Super\n");
            break;

        case 2:
            printf("Enter A\n ");
            scanf("%d",&A);
            printf("Very good\n");
            break;

        case 3:
            printf("Enter B\n ");
            scanf("%d",&B);
            printf("Fair\n");
            break;

        case 4:
            printf("Enter Y\n ");
            scanf("%d",&Y);
            printf("Absent\n");
            break;

        case 5:
            printf("Enter F\n ");
            scanf("%d",&F);
            printf("Fail\n");
            break;

        default:
            printf("error in a figure code\n");
            break;
    }
}
