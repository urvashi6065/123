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
int c;

printf("enter a");
scanf("%d",&a);

printf("enter b");
scanf("%d",&b);

printf("enter c");
scanf("%d",&c);

a>=b && a>=c ? printf("a is max"): b>=a && b>=c? printf("b is max"): printf("c is max");

    return 0;
}
