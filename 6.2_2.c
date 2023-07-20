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
    
    printf("enter A ");
    scanf("%d",&a);
    
    printf("enter B");
    scanf("%d",&b);
    
    printf("enter C");
    scanf("%d",&c);
    
    if(a<b){
        if(a<c){
            printf("A is min");
        }else{
            printf("C is min");
        }
        
    }else if(b<c){
        printf("B is min");
    }else {
        printf("C is min");
    }

    return 0;
}
