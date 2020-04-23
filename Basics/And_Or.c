#include <stdio.h>
main()
{
    int a,b,c;
    a=6;
    b=4;
    c=a&&b;
    b=a||b||c;
    a=a&&b||c;
    printf("%d,%d,%d",a,b,c);

    c=a&&b;
    b=c&&a&&b;
    a=a||c||b;
    printf("%d,%d,%d",a,b,c);
}