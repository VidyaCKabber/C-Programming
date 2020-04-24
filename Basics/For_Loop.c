#include <stdio.h>
main(){
    int i,j,n=0;
    printf("enter n");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",n);
        }
        printf("\n");
        n--;
    }
}
