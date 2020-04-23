#include <stdio.h>
#include <math.h>
int main(){
    double x,y;
    printf("Enter a number");
    scanf("%lf",&x);
    y=pow(x,3);
    printf("cube of a number=%lf",y);
}