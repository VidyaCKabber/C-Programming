#include <stdio.h>
main(){
    int x;
    float y,z;
    printf("1\n");
    printf("2\n");
    printf("3\n");

    printf("Enter a number");
    scanf("%d", &x);
    switch(x){
        case 1:
            printf("One");
            break;

        case 2:
            printf("Two");
            break;

        case 3:
            printf("Three");
            break;
    }
}