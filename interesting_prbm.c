#include<stdio.h>

int main()
{
int i=0;
for(;i<10;i++);
{
    printf("%d ",i);
}
return 0;
}


//When you use a semicolon just after the ‘for’ statement, it becomes a statement in itself. The body written inside the loop is no longer part of the for loop. The for(;i<10;i++); 
//statement in this code executes until the value of i becomes 10. When the value of i becomes 10, the test expression fails, and the control comes out of this statement. As a result, 
//when the value of i is printed, the output is 10.




#include<stdio.h>

int main()
{
while(int i=0;i<10;i++)
{
    printf("%d ",i);
}
return 0;
}

//There will be an error in the program given above.
/* main.c: In function ‘main’:
main.c:5:7: error: expected expression before ‘int’
    5 | while(int i=0;i<10;i++)
      |       ^~~
main.c:7:18: error: ‘i’ undeclared (first use in this function)
    7 |     printf("%d ",i);
      |        
*/

#include<stdio.h>

int main()
{
for(int i = 0; i<10; i++)
        printf("%d ",i);
        printf("upGrad");
        
return 0;
}


// 0 1 2 3 4 5 6 7 8 9 upGrad

// You can definitely use the for loop without using curly braces, but in this case, only the first statement following the loop definition is considered to belong to the loop body. Hence, the statement printf("%d ",i); forms part of the for loop, but the statement printf("upGrad"); does not form part of the for loop. Therefore, the values of the variable i will be printed in the loop, and after the loop ends, upGrad will be printed once.
