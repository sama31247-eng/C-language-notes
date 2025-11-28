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
    

    







