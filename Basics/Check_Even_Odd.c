#include <stdio.h>
main(){
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%2!=0){
        printf("x is odd");
    }else{
        printf("x is even");
    }
}