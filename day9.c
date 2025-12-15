 // How to inter change two row in a matrix
#include<stdio.h>
int main(){
    int arr[3][3],r1,r2;
    printf("enter the value of matrix :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("enter the value:");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the matrix is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("enter the value of rows which you want to exchange\n");
    printf("enter the value:");
    scanf("%d",&r1);
    printf("enter the value:");
    scanf("%d",&r2);
    for(int j=0;j<3;j++){
         int temp;
         temp=arr[r1][j];
         arr[r1][j]=arr[r2][j];
         arr[r2][j]=temp;
    }
    printf("the new matrix is:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

// HOW TO WRITE A FUNCTION IN A 2-D matrix

void read(int[][50],int,int ); //You must specify 2nd dimension:
void display(int[][50],int,int);
int main(){
    int r,c;
    printf("enter the value of row and col\n");
    printf("row value:");
    scanf("%d",&r);
    printf("enter column value:");
    scanf("%d",&c);
    int arr[50][50];
    read(arr,r,c);
    display(arr,r,c);
    
}
void read(int x[][50],int r ,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("enrer the value:");
            scanf("%d",&x[i][j]);
        }
    }
}
void display(int y[][50],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",y[i][j]);
        }
        printf("\n");
    }
}

// how to compare two matrix

int main(){
    int a[10][10],b[10][10],m=2,n=2,p=3,q=2,count=0;
    printf("enter the value in matrix one : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("enter the value:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrx one is : \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("enter the value in matrix two : \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("enter the value:");
            scanf("%d",&b[i][j]);
        }
    }
    printf("matrx two is : \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    if(m!=p || n!=q){
        printf("matrices cannot be compared\n");
        return 0; // to stop here
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] == b[i][j]){
                count++;
            }
        }
    }
    if(count == (m*n)){
        printf("two matrix are equal");
    }
    if(count!=m*n){
        printf("two matrix are not equal");

}
}

// how to check if a matrix is identity matrix

int isind(int arr[10][10],int n);
int main(){
 int arr[10][10]={{1,0,0},
                 {0,1,0},
                 {0,0,1}},n,pos;
printf("enter the size of matrix : ");
scanf("%d",&n);
 pos=isind(arr,n);
 if(pos==0){
     printf("the matrix is not identity : ");
 }
 else{
   
    printf("the matrix is identity : ");
 }     
}
int isind(int arr[10][10],int n){
    int pos=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && arr[i][j]!=1){
                pos=0;
                
            }
            if(i!=j && arr[i][j]!=0){
                pos=0;
                
            }
          
            
        }
    }
    return pos;
}

// Array of strings

// how to store and print a string

int main(){
 char name[3][10]={"sambhav","raj","sam"};//here first [3]-means this array can hold three names & second[10]-means that these names can have
 int size=sizeof(name)/sizeof(name[0]);// maximum size of 10
 for(int i=0;i<size;i++){
    printf("%s\n",name[i]);

 }
}

// HOW TO PERFORM CHANGES IN A STRING

int main(){
 char name[][10]={"sambhav","raj","sam","ben"};
 int size=sizeof(name)/sizeof(name[0]);
 name[0][6]='V';
 name[0][0]='S';// TO PERFORM CHANGE IN STRING
 for(int i=0;i<size;i++){
    printf("%s\n",name[i]);
 }
}

// how to take user input in string

#include<string.h>
int main(){
    char name[3][25]={0};
    int size=sizeof(name)/sizeof(name[0]);
    for(int i=0;i<size;i++){
        printf("enter the name :");
        fgets(name[i],sizeof(name[i]),stdin);
        name[i][strlen(name[i])-1]='\0';
    }
    for(int i=0;i<size;i++){
        printf("%s\n",name[i]);
    }
    
}








