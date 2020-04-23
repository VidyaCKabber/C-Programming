#include <stdio.h>
#include <math.h>
main(){
    float x,y,z,n,sq,sinx,cosx,tanx;
    printf("Enter x value");
    scanf("%f", &x);
    printf("Enter z value");
    scanf("%f", &z);
    n=22/7;
    y=z*(n/180);
    sq=sqrt(x);
    sinx=sin(y);
    cosx=cos(y);
    tanx=tan(y);
    printf("Square root of x=%f\n",sq);
    printf("Sine value of y=%f\n",sinx);
    printf("Cosine value of y=%f\n",cosx);
    printf("Tangent value of y=%f\n",tanx);
    cosecx=1/sin(y);
    secx=1/cos(y);
    cotx=1/tan(y);
    printf("Cosecent value of y=%f\n",cosecx);
    printf("Secant value of y=%f\n",secx);
    printf("cotangent value of y=%f\n",cotx);
}