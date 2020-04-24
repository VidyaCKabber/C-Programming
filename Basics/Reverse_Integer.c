#include <stdio.h>
main(){
    int n,r=0,d,t;
    printf("Enter a number");
    scanf("%d",&n);
    t=n;
    start:d=n%10;
        r=r*10+d;
        n/=10;
        if(n>0)
    goto start;
    printf("Input number=%d",t);
    printf("r=%d",r);
}