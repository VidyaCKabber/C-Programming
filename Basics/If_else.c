#include <stdio.h>
main()
{
    char v;
    printf("It you have interest in maths");
    scanf("%c",&v);
    if(v=='y'){
        printf("You will score in maths");
    } else if(v=='n'){
        printf("You may be pass the exam");
    }
}