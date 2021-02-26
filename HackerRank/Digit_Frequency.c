#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int frequency(int a[], int n, int x) 
{ 
    int count = 0; 
    for (int i=0; i < n; i++) 
       if (a[i] == x)  
          count++; 
    return count; 
} 
 

int main() {
    
    char *s;
    int i,j=0,k;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1); 
    
    int numbers[strlen(s)];
    
     for(i=0; i< strlen(s); i++){
        if((isdigit(s[i])) == 1){
            numbers[j] = s[i]-'0';
            j++;
        } 
    }
    
    for(k=0; k<10; k++){
        int result = frequency(numbers, j, k); 
        printf("%d ",result);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
