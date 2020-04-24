//Write a C program to accept the amount to be deposited, rate of interest and print the balance in the account at the end of every year, until the balance exceeds twice the original amount of the deposit(Assume annual compounding).
#include <stdio.h>
main(){
    int p,t,i=1,r,interest,total;
    p=10, t=1,r=10;
    do{
        interest=(p*t*r)/100;
        total=interest+p;
        p=total;
        printf("%d balence=%d\n",i,p);
        t++;
        i++;
        }while(p<=20);
}