#include <stdio.h>
main (){
    int x,i;
    printf("Enter x value");
    scanf("%d", &x);
    for(i=x;i>=1;i--){
        printf("%d*",i);
    }
}