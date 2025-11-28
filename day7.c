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
/*
print pattern
*       * 
  *   *
    *
  *   *
*       *
*/
int main(){
  int r;
  printf("enter no. of row");
  scanf("%d",&r);
  for(int i=1;i<=r;i++){
    static int k=0;
    for(int j=1;j<=r;j++){
      if(i==j || j==r-k){
        printf("* ");
      }
      else{
        printf("  ");
      }

    }
    printf("\n");
    k++;
  }
   }
   /*
   print pattern
* * * * * 
*       *
*       *
* * * * *
   */

int main(){
  int r,c;
  printf("enter no. of row & col:");
  scanf("%d%d",&r,&c);
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
      if((i==1 || i==r) || (j==1 || j==c)){
        printf("* ");
      }
      else{
        printf("  ");
      }
    }
    printf("\n");
  }
}
/*
print pattern 
        * 
      * *
    * * *
  * * * *
* * * * *
*/
int main(){
  int r;
  printf("enter no. of row");
  scanf("%d",&r);
  for(int i=1;i<=r;i++){
    static int k=0;
    for(int j=1;j<=r;j++){
        if(j>=r-k){
          printf("* ");
        }
        else{
          printf("  ");
        }
    }
    printf("\n");
    k++;
  }
}
/*
print pattern
      1 
    2 3
  4 5 6
7 8 9 10
*/
int main(){
  int r;
  printf("enter no. of row");
  scanf("%d",&r);
  for(int i=1;i<=r;i++){
    static int k=0;
    for(int j=1;j<=r;j++){
      static int h=1;
      if(j>=r-k){
        printf("%d ",h);
        h++; 
      }
      else{
        printf("  ");
      }

    }
    printf("\n");
     k++;
   
  }
}

/*
        * 
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/
int main(){
  int r;
  printf("enter no. of row");
  scanf("%d",&r);
  int sp=r-1;
  int st=1;
  for(int i=1;i<=r;i++){
    for(int j=1;j<=sp;j++){
      printf("  ");
    }
    for(int k=1;k<=st;k++){
      printf("* ");
    }
    sp--;
    st=st+2;
    printf("\n");
  }

}
/*
print pattern
      1 
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7
*/
int main(){
    int r;
    printf(" enter no. of row");
    scanf("%d",&r);
    int sp=r-1;
    int di=1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=sp;j++){
            printf("  ");
        }
        for(int k=1;k<=di;k++){
            printf("%d ",k);
        }
        printf("\n");
        sp--;
        di=di+2;
    }
}
/*
printf pattern 
      1 
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
int main(){
    int r;
    printf("enter no. of row");
    scanf("%d",&r);
    int sp=r-1;
    int di=1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=sp;j++){
            printf("  ");

        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }
        for(int p=i-1;p>=1;p--){
            printf("%d ",p);
        }
        sp--;
        di=di+2;
        printf("\n");
    }
}
/*
print pattern 
      * 
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/
int main(){
    int r;
    printf("enter no. of row");
    scanf("%d",&r);
    int a=(r/2)+1;
    int sp=a-1;
    int st=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=sp;j++){
            printf("  ");
        }
        for(int k=1;k<=st;k++){
            printf("* ");
        }
        sp--;
        st=st+2;
        printf("\n");
    }
    sp=1;
    st=2*a-3;
    for(int i=1;i<=a-1;i++){
        for(int j=1;j<=sp;j++){
            printf("  ");
        }
        for(int k=1;k<=st;k++){
            printf("* ");
        }
        sp++;
        st=st-2;
        printf("\n");


    }
}


  