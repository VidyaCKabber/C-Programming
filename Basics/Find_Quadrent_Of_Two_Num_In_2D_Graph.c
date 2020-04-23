#include <stdio.h>
main(){
    float x,y;
    printf("Enter two numbers");
    scanf("%f%f", &x,&y);
    if((x>0)&&(y>0)){
        printf("The x and y are in 1st quadrant");
    }else if((x<0)&&(y>0)){
        printf("The x and y are in 2nd quadrant");
    }else if((x<0)&&(y<0)){
        printf("The x and y are in 3rd quadrant");
    }else{
        printf("The x and y are in 4th quadrant");
    }
}