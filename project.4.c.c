/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int hra;
    int da;
    int ta;
    int besic;
    int ans;
    
    printf("enter hra");
    scanf("%i",&hra);
    
    printf("enter da");
    scanf("%i",&da);
    
    printf("enter ta");
    scanf("%i",&ta);
    
    printf("enter besic");
    scanf("%i",&besic);
    
    hra=(10*100)/100;
    da=(5*100)/100;
    ta=(8*100)/100;
    besic=(100*100)/100;
    
    ans=(besic+hra+da+ta);
    printf("%i",ans);

    return 0;
}
