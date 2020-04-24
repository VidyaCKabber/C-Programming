/*
This program generate the following number pattern
    1
   232
  34543
 4567654
567898765
and so on 
*/
#include <stdio.h>
main(){
    int i, j, k=1, n, p;
    printf("Enter number");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=1; j<(n-i); j++)
        printf(" ");
        for(j=1; j<=i; j++)
        printf("%d", k++);
            for(j=(i-1); j>=1;  j--){
                p=k-2;
                k=k-1;
            printf("%d", p);
        }
        printf("\n");
    }
}