#include<stdio.h>
// 011-- this is binary number and 11-- this decimal number
/*storage class in c language
auto
extern
static
register
*/

/* auto--Variables declared inside a function are taken to be auto.
   extern--variable declared outside of all the functions is know as ext.they can be accesed from any fuction inside the 
   program 
   ststic-- this is 
   register-- value is stored in cpu memory and can not be changed by using scanf();initial value is garbage;

*/

// Array = A fixed-size collection of elements of the same data type 
//            (similar to a variable, but it holds more than 1 value)
// how to make an arry and print it

    int main(){
    int num[]={10,20,30,40,50};
    char alp[]={'A','B','C','D'};
    char name[]="sambhav yadav";

    printf("%d\n",num[4]);
    printf("%c\n",alp[2]);
    printf("%c\n",name[2]);// %c is used when we want to call a alph.
    printf("%s",name); // %s is used when we wnat to print full array

}
// how to make change in array

int main(){
    int num[]={10,20,30,40,50};
    char alp[]={'A','B','C','D'};
    char name[]="sambhav yadav";

    num[2]=300;// 30 is changed to 300
    alp[1]='b';// B is changed to b
    name[7]='-';// space is changed to -


    printf("%d\n",num[2]);
    printf("%c\n",alp[1]);
    printf("%c\n",name[7]);// %c is used when we want to call a alph.
    printf("%s",name); // %s is used when we wnat to print full array

}

// array using loops

int main(){
    int num[]={10,20,30,40,50};
    char alp[]={'A','B','C','D','E'};
    char name[]="sambhav yadav";

   for(int i=0;i<5;i++){
    printf("%d ",num[i]);// 10 20 30 40 50 is printed
   }
   printf("\n");
   for(int i=0;i<5;i++){
    printf("%c ",alp[i]);//A B C D E is printed
   }
   printf("\n");
   for(int i=0;i<13;i++){
    printf("%c ",name[i]);// s a m b h a v   y a d a v is printed
   }
}

// how to find how many variables are in a array

int main(){
    int num[]={1,2,3,4,5,6};
    char alp[]={'A','B','C','D','E'};
    char name[]="sambhav yadav";
    int size;
    size=sizeof(alp)/sizeof(alp[0]);// by doing this we can get no. of elements in array
    printf("\n");
   for(int i=0;i<size;i++){
    printf("%c ",alp[i]);// 10 20 30 40 50 is printed
   }  
}

// how to give user input in an array

int main(){
int num[5]={0};
for(int i=0;i<5;i++){
    printf("Enter the value : ");
    scanf("%d",&num[i]);// will ask for input 5 times
}
for(int i=0;i<5;i++){
  printf("%d",num[i]);// will print the input that we gave above
}
}
// how to work in arry using function 
 void read(int [],int);

 // 2-D array in c

 int main(){
    int arr[2][3]={{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++){ // ROWS
        for(int j=0;j<3;j++){ //COLUMNS
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }

}

 // how to take user input in 2-d array

 int main(){
    int arr[2][3];
    for(int i=0;i<2;i++){
     for(int j=0;j<3;j++){
    printf("enter thr value");
    scanf("%d",&arr[i][j]);
    }
    }
    printf("the matrix is \n");
    for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%d ",arr[i][j]);
    }
        printf("\n");
    }
}

// ADDITION OF TWO MATRIX IN ARRAY

int main(){
    int a[3][3],b[3][3],c[3][3];
    printf("enter the values of matrix one\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the value");
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the values of matrix two\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the value");
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);// time complexity
        }
        printf("\n");
    }
    // printf("the sum of two matrix is\n");
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         printf("%d ",c[i][j]);
    //     }
    //     printf("\n");
    // }

}

// mULTIPLACTION of matrix using 2-D array

int main(){
    int a[3][3],b[3][2],c[3][2];
    printf("enter values of matrix one\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the value:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("value of matrix one is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("enter the value of matrix two\n");
     for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
             printf("enter the value:");
            scanf("%d",&b[i][j]);
        }
    }
    printf("the value of matrix two is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("the result of multi of two matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            int sum=0;
            for(int k=0;k<3;k++){
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    // printf("third matrix is\n");


}
 
 
