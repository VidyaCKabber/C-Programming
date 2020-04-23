//In the process of grouping the people into CHILD, YOUNG and OLD categories, depending on the age group, which control statement with a suitable example.
#include <stdio.h>
main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x<12){
        printf("CHILD");
    }else if((x>13)&&(x<45)){
        printf("YOUNG");
    }else{
        printf("OLD");
    }
}
