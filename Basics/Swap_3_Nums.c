#include <stdio.h>
main(){
    int a,b,c,d;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    d=b;
    b=a;
    a=c;
    c=d;

    printf("exachange no = %d",a);
    printf("exchang no =%d",b);
    printf("exchang no=%d",c);
}
