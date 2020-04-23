#include <stdio.h>
main(){
    unsigned int x,y;
    x=64 , y=16;
    x=x>>1;
    printf("After right shifting by 1,x=%d\n",x);
    y=y<<1;
    printf("after left shifting by 1,y=%d\n",y);
}
