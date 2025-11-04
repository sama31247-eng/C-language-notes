#include<stdio.h>
 
// RETURN 

/*return synatax -- data_type function name(){
                          code
                          return variable;

}*/ 

int square(int num1){
     int result=num1*num1;
     return result;
}
int main(){
  int num;
  num =square(2);
  printf("%d",num);
  return 0;
}

// function  based program with bool

#include<stdbool.h>
bool age_check(int age){
  if(age>=18){
    return true;
  }
  else{
    return false;
  }
  }
  int main(){
    int a;
    bool age;
    printf("enter your age");
    scanf("%d",&a);
    age=age_check(a);
    if(age==true){
      printf("welcome");
    }
    else{
      printf("under-age");
    }
    return 0;
  }

  // program to find max of the two number using function

  int max(int num1,int num2){
     if(num1>num2){
      return num1;
     }
     else{
      return num2;
     }
}
int main(){
  int num1,num2;
  int Max;
  printf("enter any two number");
  scanf("%d%d",&num1,&num2);
  Max=max(num1,num2);
  printf("max is--%d",Max);
  return 0;
}

// VARIABLE SCOPE -- It refers to where a variable is recognised and accessible.
//                    Varibles can share the same name if 
//                    they're in different scopes{}

// function can not see indise another fuctions

#include<stdio.h>
//int result=0; // global variable

int add(int num1,int num2){
  int result=num1+num2; // local variable 
  return result;
}

int sub(int num1,int num2){
  int result=num1-num2; // local variable 
  return result;
}

int main(){
  int result=add(2,4); // local variable 
  printf("%d\n",result);
  int result1=sub(4,2);
  printf("%d",result1);
  return 0;
}

// program using global varible

int sum; // here sum global varible

int sum1(int num1,int num2){
        sum=num1+num2; // local varible
}
int sum2(int num1,int num2){
         sum=num1+num2;
}

int main(){
  sum=sum1(2,2)+sum2(2,2);
  printf("%d",sum);// sum is 8;
  return 0;
}

// FUNCTION PROTOTYPE -- Provides the compiler with information about a function 's:
// name,return type and parameters before its actual definition .          
// Enables type checking and allows functions to be used before they're defined.
// Improves readability,organization, and helps prevent errors.

#include<stdbool.h>
void hello(char name[],int age);// function prototype
bool age_check(int age);// function prototype
int main (){
    hello("sambhav",17);  
    if(age_check(17)){
        printf("welcome");
    }
    else{
        printf("under age");
    }
}
void hello(char name[],int age){
         printf("your name is %s\n",name);
         printf("your age is %d\n",age);

}
bool age_check(int age){
    if(age>=18){
        return true;
    }
    else{
        return false;
    }
}

                                       //WHILE LOOP//

// Continue some code while condition remains true 
//condition must be true for us to enter while loop

int main(){  
    int num=1;
    while(num <= 0){// first condition is checked then block of code is runed //
        printf("enter a postive number");
        scanf("%d",&num);
    }
    return 0;
}

// DO While loop//

int main(){  
    int num=1;
  do{   // int do while loop first code is runed then condition is checked//
        printf("enter a postive number");
        scanf("%d",&num);
    }while(num <= 0);
    return 0;
}

#include <string.h>
int main(){
    char name[50]="";
    printf("enter your name");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    while(strlen(name)==0){
        printf("please enter your name");
        fgets(name,sizeof(name),stdin);
        name[strlen(name)-1]='\0';
    }
    return 0;
}

// boolan based loop question //

#include<stdbool.h>
int main(){
    bool running=true;
    char op='\0';
    while(running){ 
        printf("you are playing the game\n");
        printf("do you want to continue?(yes=Y and No=N)");
        scanf(" %c",&op);
        if(op!='Y' && op!='y'){
            running=false;
        }
    }
    printf("you have EXIT the game");
    return 0;
}














 











// ternary operator ? = shorthand for if-else statements

// (condition) ? value_if_true : value_if_false;

// ENUM = enum is a user defined data type that consists of a set of named inteagers constant, 
//         Benefit : replaces numbers with readable names 

// in c all constants are upper case letters

int main(){
    enum day{SUNDAY,MONDAY,TUESDAY,THRUSDAY,FRIDAY,SATURDAY};
    enum day today=SUNDAY;// in enum normaly counting start from 0 but if we assign 1 then
    printf("%d",today);  // it can start from 1 also if you give value one to sunday
    return 0;
}

// giving values to enum days.

int main(){
    enum days{SUNDAY=1,MONDAY=2,TUESDAY=3,WEDNESAY=4,THRUSDAY=5,FRIDAY=6,SATURDAY=7};
    enum days today=SUNDAY;
    printf("%d",today);
    return 0;
}

//program to check week end 

int main(){
    typedef enum{SUNDAY,MONDAY,TUESDAY,THRUSDAY,FRIDAY,SATURDAY}days;
    days today=SUNDAY;
    if(today==SUNDAY || today==SATURDAY){
        printf("today is weekend");
    }
    else{
        printf("today is working day");
    }
    return 0;
}








