/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    
    printf("1.call\n");
    printf("2.text");
    scanf("%d",&a);
    
    switch(a){
        case 1:
        printf("1.make a call");
        printf("2.recive in a call");
        scanf("%d",&a);
        switch(a){
            case 1:
            printf("1.dialing");
            break;
            case 2:
            printf("2.calling");
            break;
            case 3:
            printf("3.invaild");
            break;
        }
        break;
            
            
            default:
            printf("text is not supported");
            
            
            
            
        
        
        
        
        
        
        
        
        
        
        
        
    }








    return 0;
}
