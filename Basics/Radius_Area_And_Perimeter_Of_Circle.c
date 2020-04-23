#include <stdio.h>
main()
{
    int r,di;
    float A,P;
    printf("Enter diameter");
    scanf("%d",&di);
    r=di/2;
    A=3.142*r*r;
    P=2*3.142*r;
    printf("Radius of circle is =%d\n",r);
    printf("Area of circle is =%f\n",A);
    printf("Perimeter of circle is=%f",P);
}
