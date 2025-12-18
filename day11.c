// Difference b/w pointer to an inteager and pointer of an array
// pointer to an inteager
#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;//pointer to an inteager
    printf("%p",ptr);
    
}
int main(){
  int arr[5];
  int *p;// this is a pointer to an inteager
  int (*ptr)[5];// this is a pointer to an array
  p=arr;
  ptr=&arr;
  printf("pointer p =%d and ptr =%d",p,ptr);
  p++;// memory address is increased by 4 byte
  ptr++;//memory address is increased by 20 bytes as array of 5 inteagers has 20 byte value
  printf("pointer p=%d and ptr =%d",p,ptr);    
}

//Sizeof integer pointer and pointer to an array

int main(){
 int arr[5]={1,2,3,4,5};
 int (*ptr)[5];//pointer to an array
 int *p;//inteager pointer
 p=arr;
 ptr=&arr;
 printf("size of pointer p=%d and pointer ptr=%d\n",sizeof(p),sizeof(ptr));// here p and ptr are all pointers so sizeof them is 8byte.
 printf("size of pointer *p=%d  and pointer *ptr=%d",sizeof(*p),sizeof(*ptr)); //here *p=points to an inteager  and *ptr=points to an array of inteager   
}
