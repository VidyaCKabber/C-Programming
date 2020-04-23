#include <stdio.h>
main(){
    int a;
    float x,y,s,sb,m,d;
    printf("1 sum\n");
    printf("2 substraction\n");
    printf("3 multiplication\n");
    printf("4 division\n");

    printf("Enter a");
    scanf("%d", &a);
    switch(a){
        case 1:
        printf("Enter x and y\n");
        scanf("%f%f",&x,&y);
        s=x+y;
        printf("Ans=%f\n", s);
        break;

        case 2:
            printf("Enter x and y\n");
            scanf("%f%f",&x,&y);
            sb=x-y;
            printf("Ans=%f\n", sb);
            break;

        case 3:
            printf("Enter x and y\n");
            scanf("%f%f",&x,&y);
            m=x*y;
            printf("Ans=%f\n", m);
            break;

        case 4:
            printf("Enter x and y\n");
            scanf("%f%f",&x,&y);
            d=x/y;
            printf("Ans=%f\n", d);
            break;

        default:
            printf("Error in code\n");
            break;
        }
}