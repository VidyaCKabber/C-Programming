#include <stdio.h>
main(){
    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    if (a>b){
        printf("a is big");
    } else if(b>a){
        printf("b is big");
    }
}

