#include <stdio.h>
main(){
    int i,j,num=4;
    printf("Enter i");
    for(i=num;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",  num);
        }
        printf("\n");
        num--;
    }
}