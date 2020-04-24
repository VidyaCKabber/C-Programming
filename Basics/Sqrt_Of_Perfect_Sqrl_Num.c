#include<stdio.h>
int main(){
    int a,i,n;
    printf("enter n value");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i*i==n){
            printf("%d\n",i);
        }
    }
}