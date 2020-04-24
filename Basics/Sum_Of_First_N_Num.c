#include <stdio.h>
main(){
    int n,i,c=0;
    printf("How many numbers we have to add");
    scanf("%d", &n);
    i=0;
    while(i<=n){
        c=i+c;
        printf("ans=%d",c);
    }
}