#include <stdio.h>
main(){
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if(x%2!=0){
        if((x>0)&&(x<999)){
            printf("x is odd and which is in bln 0 and 999");
        }else
            printf("x is odd and which is not in bln 0 and 999");
        }
}