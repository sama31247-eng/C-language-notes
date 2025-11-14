#include<stdio.h>
/* print pattern 
   A
   AB
   ABC
   ABCD
   ABCDE
*/
int main(){
    int r;
    printf("enter no, of row");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
 }