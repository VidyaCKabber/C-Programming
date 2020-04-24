#include <stdio.h>
main(){
    int x;
    printf("enter a number");
    scanf("%d", &x);
    if(x%2!=0){
        if((x%3!=0)&&(x%10==0)){
            printf("This is multiple of 10 but not 3");
        }else{
            printf("This is not multiple of 3 and 10");
        }
    }else if(x%2==0){
        if((x%3==0)&&(x%10==0)){
            printf("This is multiple of 3 and 10");
        }
        if((x%3!=0)&&(x%10==0)){
            printf("This is multiple of 10 but not 3");
        }
        if((x%3==0)&&(x%10!=0)){
            printf("This is multiple of 3 but not 10");
        }
    }else{
        printf("This is not multiple of 3 and 10");
    }
}
