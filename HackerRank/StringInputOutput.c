/*
Sample Input 0
C
Language
Welcome To C!!

Sample Output 0
C
Language
Welcome To C!!

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 100

int main() 
{
    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];
    
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    
    return 0;
}
