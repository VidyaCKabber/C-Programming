#include <stdio.h>
main(){
    float h;
    printf("Enter a number");
    scanf("%f", &h);
    if(h>170){
        printf("The man is tall");
    } else if((h<100)&&(h>170)){
        printf("The man has average height");
    } else if((h>80)&&(h<100)){
        printf("The man is dwarf");
    } else{
        printf("The man has abnormal height");
    }
}