//ite a C program to accept the population(in crores) and rate of growth of two countries A and B, and print then population of the countries every year, until population of A exceeds that of B.
#include <stdio.h>
main(){
    int a,b,r,s,rate1,rate2,t=0;
    printf("Enter population for a and b");
    scanf("%d%d", &a,&b);
    printf("Enter rate of growth for a and b");
    scanf("%d%d", &r,&s);
    begin:
        rate1=r*a/100;
        rate2=s*b/100;
        a=a+rate1;
        b=b+rate2;
        t=t++;
        printf("a=%d  %d\n",a,t);
        printf("b=%d  %d\n",b,t);
        if(a<b)
    goto begin;
}