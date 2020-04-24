#include <stdio.h>
main(){
    int integer,sum=-1;
    printf("Enter a number");
    scanf("%d", &integer);
    do{
        sum=sum+integer;
        integer=integer+1;
    }while(integer<=2);
    printf("sum=%d",sum);
}