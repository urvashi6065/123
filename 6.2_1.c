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
    
    printf("enter A");
    scanf("%d",&a);
    
    printf("enter B");
    scanf("%d",&b);
    
    a>b ? printf("A is max"):printf("B is max");
    
    

    return 0;
}
