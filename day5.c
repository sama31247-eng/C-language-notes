#include<stdio.h>
// #include<windows.h>--- it is used to make the windows sleep for 1s
int main(){
    //  For loop= Repeat some code a limited # of times 
    //   for(Initialization; condition ; update)

    int i=1;
    for(i=1;i<=10;i++){ // using positive increment
        printf("%d\n",i);
    }
    return 0;

    for(i=20;i>=0;i--){ // using negitive increment 
        printf("%d\n",i);
    }

}
// how to use sleep function
    int main(){
    int i=1;
    for(i=10;i>=0;i--){
        Sleep(1000); // here sleep is in milliseconds
        printf("%d\n",i);
        
    }
    printf("Happy new year\n");
    
}

// Break = Break out of a loop (STOP)
// continue = Skip current cycle of a loop(SKIP)

// break
int main(){
    for(int i=1;i<=10;i++){
        if(i==6){
            break;
        }
        printf("%d\n",i);
    }
}

// continue 

int main(){
    for(int i=1;i<=10;i++){
        if(i==4){
            continue;
        }
        printf("%d\n",i);
    }
}

// nested loops-- using a loop inside a loop

int main(){
    int j;
    for(int i=1;i<4;i++){
        for(j=1;j<10;j++){// in nested loop we use different variable for initalization
            printf("%d",j);// condition and increment
        }
        printf("\n");
    }
}

// Loop termination-- In this if we place ;(semicolon) at the end of for loop then 
// only last condition will be printed

int main(){
    int i;
    for( i=1;i<10;i++);
    printf("%d",i);// only the value of i=10 will be printed 
}

// pattern printing

// here we are repeating a single line multiple times

#include<stdio.h>
int main(){
    int row;
    printf("enter number of rows");
    scanf("%d",&row);
    for(int i=1;i<=row;i++){
        printf("$$$$\n");

    }
    return 0;
}

// rectangular pattern question 

int main(){ 
    int i=1;
    int j=1;
    int a;
    printf("enter lenght");
    scanf("%d",&a);
    char b;
    printf("enter the symbol");
    scanf(" %c",&b);
    int c;
    printf("enter width");
    scanf("%d",&c);
    for(i=1;i<=c;i++){
        for(j=1;j<a;j++){
            printf(" %c",b);
        }
        printf("\n");

    }
      return 0;  

    }

    // print the given pattern 
    //1111
    //2222
    //3333

    int main(){
    int r,c;
    printf("enter no. of row");
    scanf("%d",&r);
    printf("enter no.of c");
    scanf("%d",&c);
    int k=1;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
                printf("%d",i);
        }
        printf("\n");

    }   
}

 // print the given pattern 
 // ABCD
 // ABCD
 // ABCD

 //ASCI-- value of A-65,a-97

 int main(){
    int r;
    printf("enter no.of row");// in this code we will tell no,of row and col
    scanf("%d",&r);
    int c;
    printf("enter no.of col");//AND the code will print ABcD rectangle
    scanf("%d",&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
    return 0;
}

// print this pattern 
//A A A A
//B B B B
//C C C C

int main(){
    int row;
    printf("enter no. of rows");
    scanf("%d",&row);
    int col;
    printf("enter no. of col");
    scanf("%d",&col);
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            printf("%c ",i+64);
        }
        printf("\n");
    }

 }

 // STAR PATTERN question 

 //*
// **
// ***
// ****

int main(){
    int r;
    printf("enter row:");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
 }

/*
print this pattern
1
12
123
1234
*/
int main(){
    int r;
    printf("enter o. of row");
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
 }
 /*
 print this pattern 
 
 */
 







    







