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
int d;
printf("enter A");
scanf("%d",&a);

printf("enter B");
scanf("%d",&b);

printf("enter C");
scanf("%d",&c);

printf("enter D");
scanf("%d",&d);

a>=b && a>=c && a>=d? printf("a is max"): b>=a && b>=c && b>=d? printf("b is max"): c>=a && c>=b && c>=d? printf("c is max"): printf("d is max");

    return 0;
}
