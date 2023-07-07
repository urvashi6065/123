/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

    int a;
float b;

printf("enter 1st number");
scanf("%i",&a);
printf("enter 2nd number");
scanf("%f",&b);

a=a+b;
b=a-b;
a=a-b;

printf("%i\n",a);
printf("%f",b);

    return 0;
}
