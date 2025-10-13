#include<stdio.h>

//user input-- SCANF= it can not read any white spaces//

  //  🔑 Rule to remember:

//For %c and %[ ] specifiers, always add a space in the format string if you want to ignore whitespace.

//For %d, %f, %s, you do not  need the space — they already skip whitespace.

int main(){
    int age;
    float gpa;
    char grade;
    char name[20];
    
    printf("enter your age");
    scanf("%d",&age);
    printf("enter your gpa");                

    scanf("%f",&gpa);
    printf("enter your grade");
    scanf("%c",&grade);
    printf("enter your name");
    scanf("%s",&name);
    
    printf("your age is %d\n",age);
    printf("your gpa is %f\n",gpa);
    printf("your grade is %c\n",grade);
    printf("your name is %s\n",name);

    return 0;
}

      // fgets//

      // fgets(char varible name,size,stdin)=syntax
      //fgets is used when we have to write a sentance as scanf does not take white space

      
    int main(){
    char name[40];
    printf("enter your name");
    fgets(name,sizeof(name),stdin);
    printf("%s",name);
    return 0;
}

  // sizeof() 

  // this is used to find the size of the varible 

    int main(){
    char name[40];
    printf("enter your name");
    fgets(name,sizeof(name),stdin);
    printf("%s",name);
    return 0;
   }

   // MATHS FUNCTION -- use #include<stdio.h>

   //sqrt-- this is a maths function which is used to take out root

   #include<math.h>  // use this header file for maths function
    int main(){
    int x;
    int root;
    printf("enter a number");
    scanf("%d",&x);
    root=sqrt(x);
    printf("the root of number is %d",root);
    return 0;
}

//pow-- this function is used to take power of a number

int main(){
    int a;
    int b;
    printf("enter anumber");
    scanf("%d",&a);
    b=pow(a,2);
    printf("%d",b);
}

// round-- this function is used to round a value use float not int for varible

int main(){
    float a;
    int b;
    printf("enter a number");
    scanf("%f",&a);
    b=round(a);
    printf("the round off value is%d",b);
    return 0;
}

// ceil-- this function is used to round up 

int main(){
    float a; // we will never take value in int as it will truncate the value
    printf("enter a number");
    scanf("%f",&a);
    a=ceil(a);
    printf("%f",a);
    return 0;
}

// floor-- this function is used to round down 

int main(){
    float a;
    printf("enter a number");
    scanf("%f",&a);
    a=floor(a);
    printf("%f",a);
    return 0;
}

// abs-- this function tells us the distance of the number from zero

int main(){
    int a=-3;
    a=abs(a);
    printf("%d",a);
    return 0;
}

//  MATHS PROJECT //

int main(){
    float area;
    float SA;
    float volume;
    float pi=3.14159;
    float radius;
    printf("enter the radius");
    scanf("%f",&radius);
    area=pi*pow(radius,2);
    printf("area of sphare :%.2f\n",area);
    SA=4*area;
    printf("SA is :%.2f\n",SA);
    volume=(4.0/3.0)*pi*pow(radius,3);
    printf("volume of sphare  :%.2f\n",volume);
    return 0;
}

// compound interest calculator

int main(){
    float p;
    float rate;
    float times_compounded;
    float amount;
    float year;
    printf("enter the principal");
    scanf("%f",&p);
    printf("enter the rate");
    scanf("%f",&rate);
    rate=rate/100;
    printf("enter times compounded :");
    scanf("%f",&times_compounded);
    printf("enter the year");
    scanf("%f",&year);
    amount=p*pow(1+rate/times_compounded,times_compounded*year);
    printf("the compounded amount is : %.2f",amount);
    return 0;
}

// if statement-- Do some code if a conduction is true .
//                 If the condition is false .don't do it.

int main (){
    int age;
    printf("enter your age : ");
    scanf("%d",&age);
    if(age>=18){
        printf("you can vote");
    }
    else if(age<0){
        printf("you are not bor yet");
    } 
    else{
        printf("you are a child");
    }
    return 0;
}

//TO USE A BOOLEAN USE BOOL header file--#include<stdbool.h>
#include<stdbool.h>
 int main(){
    bool is_student=true;
    if(is_student==true){  // while checking a bool you donot need to write == true/flase 
        printf("you are a student");
    }
    else{
        printf("you are not a student");
    }
    return 0;
}





