/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float cel;
    float ans;
    
    printf("1st number");
    scanf("%f",&cel);
    
    ans=(cel-32)*(0.56);
    printf("%f",ans);

    return 0;
}
