#include <stdio.h>
#include <math.h>
int main(){
    double x,y,z;
    printf("Enter two number");
    scanf("%lf%lf",&x,&z);
    y=pow(x,z);
    printf("power of a number=%lf",y);
}