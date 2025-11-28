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

 /* print pattern 
   A
   12
   ABC
   1234
   ABCDE
*/

int main(){
    int r;
    printf("enter no. of row: ");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                printf("%d ",j);
            }
        }
        else{
             for(int j=1;j<=i;j++){
                printf("%c ",j+64);
        }
    }
    printf("\n");
 }
}

/*print this pattern
* * * * * * 
* * * * *
* * * *
* * *
* *
*
*/

int main(){
    int r;
    printf("enter no. of row");
    scanf("%d",&r);
    for(int i=r;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
 }

 /*
 print pattern 
1 1 1 1 1 
2 2 2 2
3 3 3
4 4
5
 */

  int main(){
    int r;
    printf("enter no. of row");
    scanf("%d",&r);
    for(int i=r;i>=1;i--){
        static int k=1;
        for(int j=1;j<=i;j++){
            printf("%d ",k);
        }
        k++;
        printf("\n");
    }
 }
 /*
 print pattern
A B C D 
A B C
A B
A
 */
int main(){
    int r;
    printf("enter no. of row");
    scanf("%d",&r);
    for(int i=r;i>=1;i--){
        static int k=1;
        for(int j=1;j<=i;j++){
            printf("%c ",j+64);
        }
        k++;
        printf("\n");
    }
 }
 /*
 print pattern 
1  3  5  7  9  
1  3  5  7  9
1  3  5  7  9
1  3  5  7  9
1  3  5  7  9
 */

 int main(){
    int r;
    printf("enter row");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
         int k=1;
        for(int j=1;j<=r;j++){
            printf("%d  ",k);
            k=k+2;
        }
        printf("\n");

    }
}
/*
pattern 
1 
1 3
1 3 5
1 3 5 7
*/

int main(){
int r;
printf("enter no. of row");
scanf("%d",&r);
for(int i=1;i<=r;i++){
    int k=1;
    for(int j=1;j<=i;j++){
        printf("%d ",k);
        k=k+2;
    }
    printf("\n");
}
}

/*
print pattern 
2 4 6 8 
2 4 6 
2 4 
2 
*/
int main(){
    int r;
    printf("enter no. of row");
    scanf("%d",&r);
    for(int i=r;i>=1;i--){
        int k=2;
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k=k+2;
           
        }
        printf("\n");
    }
}
/*
print pattern
1 2 3 4 
5 6 7
8 9
10
*/
int main(){
    int r;
    printf("enter no. of row");
    scanf("%d",&r);
    for(int i=r;i>=1;i--){
        static int k=1;
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
/*
print pattern
1 
0 1
1 0 1
0 1 0 1
*/
int main(){
    int r;
    printf("enter no. of row");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                printf("1 ");
                
                }
                else{
                    printf("0 ");
            }

        }
        printf("\n");
    }
}

