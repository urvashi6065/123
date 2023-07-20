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
    
    if(a<b){
      if(a<c){
          if(a<d){
              if(a<e){
                  printf("a is min");
              }else{
                  printf("e is min");
                  
              }
          }else{
              if(d<e){
                  printf("d is min");
              }else{
                  printf("e is min");
              }
          }
      }else{
          if(c<d){
              if(c<e){
                  printf("c is min");
              }else{
                  printf("e is min");
              }
          }else{
             if(d<e){
                  printf("d is min");
              }else{
                  printf("e is min");
              } 
          }
      }
    }else{
        if(b<c){
            if(b<d){
                if(b<e){
                    printf("b is min");
                }else{
                    printf("e is min");
                }
            }else{
                 if(d<e){
                  printf("d is min");
              }else{
                  printf("e is min");
              } 
            }
        }else{
            if(c<d){
              if(c<e){
                  printf("c is min");
              }else{
                  printf("e is min");
              }
        }else{
            if(d<e){
               printf("d is min");
            }else{
                printf("e is min");
            }
        }
    }
    

    return 0;
}


    return 0;
}
