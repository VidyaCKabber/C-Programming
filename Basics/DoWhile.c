#include <stdio.h>
main(){
    int oddnum,sum=0;
    oddnum=3;
    do{
        sum=sum+oddnum;
        oddnum=oddnum+2;
    }while(oddnum<=10);
    printf("sum=%d",sum);
}