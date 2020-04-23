#include <stdio.h>
main()
{
    int p, t, r;
    float si;
    printf(""Enter p, t, r"");
    scanf("%d%d%d", &p,&t,&r);
    si=p*t*r/100;
    printf("Interest is = %f",si);
}
