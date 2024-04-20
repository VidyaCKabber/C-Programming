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
