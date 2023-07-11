/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    int b;
    int ans;
    
    
    printf("enter no");
    scanf("%i",&a);
    
    printf("enter no");
    scanf("%i",&b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    
    printf("%i\n",a);
    printf("%i",b);

    return 0;
}
