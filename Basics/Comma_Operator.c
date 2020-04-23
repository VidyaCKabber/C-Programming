#include <stdio.h>
main(){
    int a,b,temp;
    b=(a=96, a+10);
    printf("a=%d and b=%d(before)\n", a,b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d and b=%d(after)\n",a,b);
}
