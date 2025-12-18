#include<stdio.h>

// Pointer = A variable that stores the memory address of another variable.
//          Benefit: They help avoid wasting memory bt allowing you to pass
//          the address of a large data structure instead of copying the entire data.
// * = dereference operator --it sends the value of the variable
// & --it is used to send the adddress of variable

// How to make a pointer 

void birthday(int *age);
int main(){
    int age=26;
    int *pAge=&age;// giving address of age  to pAge
    birthday(pAge);
    printf("%d",age);

}
void birthday(int *age){
    // pass by reference 
    (*age)++;// we are using () because then first age get the vakue age=25 adn then plus one is done
}

// how to change the real value using pointer 

int main(){
    int p=5;// here we have declared a int variable
    printf("the value is %d\n",p);
    int *pp=&p; // here we have made a pointer and give it the address of p.* is  * = dereference operator is send to to the locaation .
    *pp=35;// here the value of pointer is changed to 35 but it has the address of p so the value in p will be changed
    printf("the value  of pointer is  %d",*pp);
}

// how assign value to the pointer 
int main(){
 int q=5;// here we gave value to the int varr.
    printf("without change %d\n",q);
    int *pq='\0';// here we have made a pointer 
    pq=&q;// here we have given the address of q to the pointer   
    *pq=8;// here we are making the change in the pointer so the change will happen in the var q .
    printf("this is the change in p %d",*pq);
}

//how to give user input in pointers 

int main(){
    int num1=5;
    int *pnum1;
    pnum1=&num1;
    printf("enter the value : ");
    scanf("%d",&*pnum1);
    printf("the value of num1 is now : %d",num1);
}

// sizeof pointer variable

int main(){
    int *num;
    printf("sizeof pointer variable %d\n",sizeof(num));// the pointer var of any data type has size of 8bit
    printf("sizeof pointer *(dereference) variable %d",sizeof(*num));// the dereference pointer var has the size of the data type

}
    
// call by value & call by address

void change1(int num);
void change2(int *num);
int main(){
    int num=5;
    printf("this is call by value ");
    change1(num);// this is call by value method
    printf("%d\n",num);
    printf("this is call by address");
    change2(&num);//this is call by address method
    printf("%d",num);
}
void change1(int num){
    num=9;
}
void change2(int *num){
    *num=9;
}

// local pointers 

// A local pointer is a pointer declared inside a function or block, so its scope is limited to that function/block.

void func() {
    int *p;   // local pointer
}


// p exists only inside func()

// It is destroyed when the function ends

// array pointer 

int main(){
    int arr[5]={1,2,3,4,5};
    int *p=arr;// we can also use &arr[0]
    *p=3;// value is changed to 3 from 1
    printf("%d",*p);// value of arr[0] is printed
}

// Dynamic Memory

// Even though grades is a pointer (char *), C allows array-style indexing on pointers because array indexing 
//is implemented using pointer arithmetic. grades[i]=*(grades+i) see cs50

// This is malloc

#include<stdlib.h>
int main(){
    int num;
    printf("enter how many elements you want to enter ");
    scanf("%d",&num);
    char *grades=malloc(num * sizeof(char));//to give the amount of memory that we want to give to the pointer form heap 
    if(grades==NULL){// to check if memory from heap is given to the array
        printf("memory allocation failed\n");
        return 1;// this is used to exit the program
    }
    for(int i=0;i<num;i++){
        printf("enter the #%d ",i+1);
        scanf(" %c",&grades[i]);
    }
    printf("the grades are\n");
    for(int i=0;i<num;i++){
       printf("%c ",grades[i]);

    }
    free(grades);// to give back the heap space in pointers 
    grades=NULL;// (to give back key) to avoid a dangling pointer 

    // In this code the pointer grades is pointing to the memory located in the heap memory 
}

//calloc-- as a malloc but gives 0 values to all the bytes

//         Allocates memory dynamically and sets all allocated bytes to 0.
//         malloc() is faster ,but calloc() leads to less bugs
//         calloc(#,size) #-- no. of elements 

int main(){
    int num=0;
    printf("enter the nuber elements ");
    scanf("%d",&num);
    int *score=calloc(num,sizeof(int));
    if(score==NULL){
        printf("memory allocation failed");
        return 1;
    }
    for(int i=0;i<num;i++){
        printf("enter the value");
        scanf("%d",&score[i]);
    }
    for(int i=0;i<num;i++){
        printf("%d ",score[i]);
    }
    free(score);
    score=NULL;
}

//realloc() = Reallocaion 
//            Resize previously allocated memory 
//            realloc (ptr, bytes)

#include<stdlib.h>
int main(){
   int num;
   printf("enter the number of elements : ");
   scanf("%d",&num);
   int *score=malloc(num * sizeof(int));
  if(score==NULL){
    printf("memory allocation failed\n");
    return 1;
  }
  for(int i=0;i<num;i++){
    printf("enter the score : ");
    scanf("%d",&score[i]);
  }
  printf("the prices are\n");
  for(int i=0;i<num;i++){
    printf("%d ",score[i]);
  }
  printf("\n");

  int newnum;
  printf("enter new number of elements : ");
  scanf("%d",&newnum);

 int *temp=realloc(score,newnum * sizeof(int));

 if(temp==NULL){
    printf("memory allocation failed");
 }
 else{
    score=temp;
    temp=NULL;

    for(int i=num;i<newnum;i++){
      printf("enter the value : ");
      scanf("%d",&score[i]);

    }
    printf("the added score are :\n");
    for(int i=num;i<newnum;i++){
      printf("%d ",score[i]);
    }
 }
 
 free(score);
 score=NULL;

}

// Malloc typecasting 

// we need typecasting in malloc beacause void * can point to any data type 
// int *p = malloc(5 * sizeof(int));      // correct
// int *p = (int *)malloc(5 * sizeof(int)); // also correct

// how to make a 2-D pointer using pointers
   
int main(){
    int *a[5],*b[5],n,m;
    printf("Enter no. of rows and coloumns : ");
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        a[i]=(int *)malloc(n * sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("enter the value : ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<n;i++){
        b[i]=(int *)malloc(n * sizeof(int));
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            b[j][i]=a[i][j];
        }
    }
    printf("the transpose of the matrix is : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    
}

// *(a[i] + j)
// a[i] → base address of row i

// a[i] + j → address of element in row i, column j

// *(a[i] + j) → value at a[i][j]  

// how to transpose a matrix
//  b[j][i]=a[i]//[]





   

