#include<stdio.h>
/*
print given pattern 
    *     
    *     
* * * * * 
    *     
    *     
*/
int main(){
   int r;
   printf("enter no. of row");
   scanf("%d",&r);
    int a;
    a=r/2+1;
   for(int i=1;i<=r;i++){
   
    for(int j=1;j<=r;j++){
          if(i==a | j==a){
            printf("* ");
          }
          else{
            printf("  ");//give two space for correct pattern
          }
    }
    printf("\n");

   }
}