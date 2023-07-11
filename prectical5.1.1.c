/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    int y;
    int ans;
    
    
    printf("enter x");
    scanf("%i",&x);
    printf("enter y");
    scanf("%i",&y);
    
   ans=(x+y)*(x+y);
   printf("%i",ans);



    return 0;
}
