#include <stdio.h>
main(){
    int a,b,c,d;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c)){
        printf("a is greaterst number");
    } else if((b>a)&&(b>c)){
        printf("b is greatest number");
    } else if((c>a)&&(c>b)) {
        printf("c is greatest number");
    } else(a=b=c);{
        printf("Three numbers are equal");
    }
}
