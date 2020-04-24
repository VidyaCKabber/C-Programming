#include <stdio.h>
main(){
    int n,r,d,t;
    printf("Enter a number");
    scanf("%d", &n);
    t=n;
    start:d=n%10;
        r=r*10+d;
        n/=10;
        if(n>10)
    goto start;
    printf("Input number=%d\n",t);
    printf("reverse number=%d\n",r);
}