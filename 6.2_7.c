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
int e;

printf("enter a");
scanf("%d",&a);

printf("enter b");
scanf("%d",&b);

printf("enter c");
scanf("%d",&c);

printf("enter d");
scanf("%d",&d);

printf("enter e");
scanf("%d",&e);

a>=b && a>=c && a>=d && a>=e? printf("a is max"): b>=a && b>=c && b>=d && b>=e? printf("b is max"): c>=a && c>=b
&& c>=d && c>=e? printf("c is max"): d>=a && d>=b && d>=c && d>=e? printf("d is max"): printf("e is max");




}
