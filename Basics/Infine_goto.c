#include <stdio.h>
main(){
    int n=1,y=0;
    BEGIN:y+n;
    n+=1;
    goto BEGIN;
    printf("y=%d\n",y);
}