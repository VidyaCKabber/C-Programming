/*
enter 4
ans is
4321
32
*/

#include <stdio.h>
main(){
    int i,j,num;
    printf("enter num");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=num;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
        num--;
    }
}
