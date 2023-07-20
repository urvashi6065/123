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
  
  if(a>b){
      if(a>c){
          if(a>d){
              printf("A is max");
          }else {
              printf("D is max");
          }
      }else {
          if(c>d){
              printf("C is max");
          }else {
              printf("D is max");
          }
      }
      
  }else{
      if(b>c){
         if(b>d){
             printf("B is max");
         }else {
             printf("D is max");
         }
      }else {
          if(c>d){
              printf("C is max");
          }else{
              printf("D is max");
          }
         
      }
  }
  
  
    return 0;
}
