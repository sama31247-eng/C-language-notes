#include<stdio.h>

// PRECEDENCE 

// Precedence of() and ,[()>,]

int main(){
    int a;
    a=(1,2,3,0); // since zero has higher precedence than comma so 0 will be printed
    printf("%d",a);
    return 0;
}

// Precedence of , and ;

int main(void) {
	int a;
	a = 1, 2, 3; // During assignment comma operator has the least precedence
	printf("%d", a);
	return 0;
}

// char undgrade to int , when it is used in an expression 

int main(){
char c = 5;
int result = c + 2;  // char(c) promoted to int before addition
}

// how to count number of digits//

int main(){
	int num;
	int temp; 
	int count =0;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
		count=count+1;
		temp=temp/10;

}
printf("digits is %d",count);
return 0;
}

// how to take sum of number//

int main() {
	 int num;
     int temp;
     int sum=0;
	 int digit;
	 printf("enter any number");
	 scanf("%d",&num);
	 temp=num;
	 while(temp!=0){

		digit=temp%10;
		sum=sum+digit;
		temp=temp/10;

	 }
	 printf("the sum of digit is %d",sum);
	 return 0;

}

// how to take product of numbers//

int main() {
	 int num;
     int temp;
     int product=1;
	 int digit;
	 printf("enter any number");
	 scanf("%d",&num);
	 temp=num;
	 while(temp!=0){

		digit=temp%10;
		product=product*digit;
		temp=temp/10;

	 }
	 printf("the sum of digit is %d",product);
	 return 0;

}

// how to reverse a number //

int main(){
	int num,temp,rev=0,digit;
	printf("enter any number");
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
		digit=temp%10;
		rev=rev*10+digit;
		temp=temp/10;
	}
	printf("the reversed of the number %d is %d",num,rev);
	return 0;	
}

// In prime number questions take lower/2 in if condition 

int main(){
    int lower;
    printf("enter lower limit");
    scanf("%d",&lower);
    int upper;
    printf("enter upper limit");
    scanf("%d",&upper);
    int i=2;
    int count=0;
    if(lower<2){
        lower=2;
    }
    do{
        i=2;
        count=0;
        for(i=2;i<=lower/2;i++){ // we can use both lower and lower/2 but use lower/2 
            if(lower%i==0){
                count=count+1;
            }
        }
        if(count==0){
            printf("%d",lower);
        }
        lower=lower+1;
    }while(lower<=upper);
    return 0;

}

// perfect number 

#include<stdio.h>
int main(){
    int P;
    int A;
    int D;
    int num;
    printf("enter a number");
    scanf("%d",&num);
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(sum==num){
        printf("number %d is perfect number",num);
    }
    else if(sum>num){

        printf("number %d is aduntant number",num);

    }
    else{
        printf("number %d is deficient  number",num);
    }
   return 0;  
}

// syntax of for loop without {} -- this ({}) is used when we want some thing inside
// loop

int main(){
    int i;
    for(int i=1;i<=10;i++)
    printf("%d",i);
    return 0;
}

//for loop no i , condition and increment

int main(){
    int i;
    for( ; ; ){
    printf("hello\n");// hello will be printed infinitely
    }
    printf("stop");
}

// Strong number 

int main(){
    int sum=0;
    int temp; 
    int num;
    printf("enter any number");
    scanf("%d",&num);
    temp=num;
    do{
        int fav=1; 
        int digit=0;

        digit=temp%10;

        for(digit;digit>=1;digit--){
            fav=fav*digit;
        }
        sum=sum+fav;
        temp=temp/10;

    }while(temp!=0);
    if(sum==num){
        printf("the number %d is strong number",num);
    }
    else{
         printf("the number %d is not strong number",num);
    }
    printf("%d this is sum",sum);
}




