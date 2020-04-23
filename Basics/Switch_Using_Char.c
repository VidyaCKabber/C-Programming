#include <stdio.h>
main(){
    char ch='a';
    switch(ch){
        case '*': 
            printf("%c",ch);
            break;
        case '?':
            printf("%c",ch);
            break;
        default:    
            printf("%c",'b');
            break;
    }
}