#include <stdio.h>
main(){
    int x,y,result1,result2;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    result1=x>y?x:y;
    printf("the rusult=%d\n",result1);
    result2=x<y?x:y;
    printf("the resulf=%d\n",result2);
}
