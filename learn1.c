// program to find square root of a number
#include<stdio.h>
int main(){
    int num;
    printf("enter any number");
    scanf("%d",&num);
    for(int i=1;i*i<=num;i++){
        if(i*i==num){
            printf("this is square%d",i);
        }
    }
}

// decimal to binary

#include<stdio.h>
int main(){
     int num;
     printf("enter any number");
     scanf("%d",&num);
     int bin=0;
     int rev=0;
     int temp;
     temp=num;
     do{
          int digit;
          digit=temp%2;
          rev=rev*10+digit;
          temp=temp/2;
     }while(temp!=0);
    temp=rev;
     do{
          int digit;
          digit=temp%10;
          bin=bin*10+digit;
          temp=temp/10;
     }while(temp!=0);
     printf("binary is %d",bin);
     return 0;   
}

// this is a better code of binary to decimal

int main(){
     int num;
     printf("enter any number");
     scanf("%d",&num);
     int temp;
     int x=0;
     int bin=0;
     int z=1;
     temp=num;
     do{
          x=temp%2;
          bin=bin+x*z;
          z=z*10;
          temp=temp/2;

     }while(temp!=0);
     printf("the binary is %d",bin);

}

// FIND LARGEST AND SECOND LARGEST ELEMNET

int main(){
int n,larg1,larg2;
printf("enter the size of array");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
  printf("enter the value");
  scanf("%d",&arr[i]);
}
if(arr[0]>arr[1]){
  larg1=arr[0];
  larg2=arr[1];
}
else{
  larg1=arr[1];
  larg2=arr[0];
}
for(int i=0;i<n;i++){
  if(arr[i]>larg1){
    larg1=arr[i];
  }
  if(arr[i]>larg2 && larg1>arr[i]){
    larg2=arr[i];

  }
}
printf("larg1 %d\n",larg1);
printf("larg2 %d",larg2);

}

// how to do reverse sorting in arry

#include<stdio.h>
void read(int [],int);
void display(int [],int);
void rev(int [],int);
int main(){
      int n;
      printf("enter the size of arry");
      scanf("%d",&n);
      int arr[n];
      read(arr,n);
      printf("the value of arry before rev\n");
      display(arr,n);
      printf("the value of arry after rev\n");
      rev(arr,n);
}
void read(int x[],int a){
  for(int i=0;i<a;i++){
    printf("enter the value");
    scanf("%d",&x[i]);
  }
}
void display(int y[],int b){
  for(int i=0;i<b;i++){
    printf("%d ",y[i]);
  }
  printf("\n");
}
void rev(int z[],int c){
  for(int i=c-1;i>=0;i--){
    printf("%d ",z[i]);
  }
}

// how to perform bubble sort

#include<stdio.h>
void read(int [],int);
void display(int [],int);
void sort(int [],int);
int main(){
  int n;
  printf("Enter the size of array");
  scanf("%d",&n);
  int arr[n];
  read(arr,n);
  display(arr,n);
  sort(arr,n);
  display(arr,n);
}
void read(int x[],int a){
    
    for(int i=0;i<a;i++){
        printf("enter the value");
        scanf("%d",&x[i]);
    }

}

void sort(int z[],int c){
    printf("value after sorting");
    for(int i=0;i<c-1;i++){
        for(int j=0;j<c-1;j++){
            if(z[j]>z[j+1]){
                int temp=z[j];
                z[j]=z[j+1];
                z[j+1]=temp;

            }
        }
    }
    
}
void display(int y[],int b){
    printf("the value of the array are");
    for(int i=0;i<b;i++){
        printf("%d ",y[i]);
    }
}

// finding index value of a element in arry if it is present

int sort1(int [],int,int);
int main(){
    int n,key,pos;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the value ");
        scanf("%d",&arr[i]);
    }
    printf("enter the value of key" );
    scanf("%d",&key);
   pos=sort1(arr,n,key);
   if(pos==-1){
    printf("key is not present int the array");
   }
   else{
    printf("key %d is present in the array and index value is %d",key,pos);
   }
 

}
int sort1(int x[],int a,int k){
    int pos;
    for(int i=0;i<a;i++){
        if(x[i]==k){
            pos=i;
            break;
        }
        else{
            pos=-1;
        }
    }
    return pos;
}






  




   
    




