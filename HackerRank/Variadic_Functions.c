#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000
int  sum (int count,...) {
    int i,sum=0; 
    va_list ap; 
    
    va_start(ap, count); 
    
    for (i = 0; i < count; i++) {
        sum +=  va_arg(ap, int);
    }
    va_end(ap); 
    return sum;
}

int min(int count,...) {
    int i,min,a; 
    va_list ap; 
    
    va_start(ap, count); 
    min = va_arg(ap, int);
    
    for (i = 0; i < count; i++) {
        if ((a = va_arg(ap, int)) < min){
            min = a;
        }
    }
    va_end(ap); 
    return min;
}

int max(int count,...) {
    int i,max,a; 
    va_list ap; 
    
    va_start(ap, count); 
    max = va_arg(ap, int);
    
    for (i = 0; i < count; i++) {
        if ((a = va_arg(ap, int)) > max){
            max = a;
        }
    }
    va_end(ap); 
    return max;
}

int test_implementations_by_sending_three_elements() {
