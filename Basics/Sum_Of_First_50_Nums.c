#include <stdio.h>
main(){
    int natural, sum=0;
    natural=1;
    do{
        sum=sum+natural;
        natural=natural+1;
    }while(natural<=50);
    printf("sum=%d\n",sum);
}
