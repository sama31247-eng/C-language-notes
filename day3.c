#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    int a;
    printf("enter your name");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    a=strlen(name);
    printf("%s",name);
    printf("%d",a);
    return 0;
}

// SWITCH-- An alernative to using many if- else statemens
//          more efficient with  fixed integer values

int main(){
    int week;
    printf("enter the week day(0-6)");
    scanf("%d",&week);
    
    switch(week){
        case 0:
        printf("Monday");
        break;

        case 1:
        printf("Tuesday");
        break;

        case 2:
        printf("Wednesday");
        break;

        case 3:
        printf("Thursday");
        break;

        case 4:
        printf("Friday");
        break;

        case 5:
        printf("Saturday");
        break;

        case 6:
        printf("Sunday");
        break;

        default:
        printf("enter a vaild day");
        break;
    }
    return 0;
}

//nested if statement -- when there is a if statement in side another if statement

#include<stdbool.h>
int main(){
    bool is_student=true;
    bool is_senior=false;
    float price=10;

    if(is_student){
        printf("you get a 10%, discount on ticket ");
        price=9;
        if(is_senior){
            printf("you get a 20% discount on ticket");
            printf("you get a 10%, discount on ticket ");
            price=7;
        }
    }
    if(is_senior){
         printf("you get a 20% discount on ticket");
         price=8;
    }
    printf("the price of ticket is%d",price);
    return 0;
}

// Logical operators = used to combine or modify boolean expressions.

// && = AND
// || = OR 
// ! = NOT

// AND -- the code will run when condition 1 && condition 2 both are true

int main(){
    int temp;
    printf("enter temp");
    scanf("%d",&temp);
    if(temp>0 && temp<30){
        printf("temperature is good");
    }
    else{
        printf("temperature is bad");
    }
    return 0;    
}

//OR -- the code will run if condition1 or condition2 is true

int main(){
    int temp;
    printf("enter temperature");
    scanf("%d",&temp);
    if(temp<=0 || temp>=30){
        printf("temperature is  Bad");
    }
    else{
        printf("temp is  good");
    }
    return 0;
}
   
// Not -- this logical operature reverses any boolean logical operature

#include<stdbool.h>
int main(){
    bool is_sunny=false;
    if(!is_sunny){
       printf("its cloudy outside");
    }
    else{
        printf("it is sunny outside");
    }
    return 0;
}

// FUNCTION-- A reusable section of code that can be "called"
//            Argument can be sent to a function so that it can be use them

/* syntax--to make a function 

 void function_name(){
    
        code body

 }*/

 /* syntax-- to call a function

    function_name();
 
 
 */

     void student_info(){
		printf("my name is sam\n");
		printf("i am learning functions\n");
		printf("functions helps  us repeat a set of code\n");
	}
	int main(){
		student_info();
		return 0;
	}

// USER INPUT FUNCTION syntax--

/*

void function_name(paramater--eg char name[20,],int age){
        CODE
}
     call - function name(name,age--argument);
*/

#include<string.h>
	void student_info(char name[],int age){
		printf("enter your name");
		fgets(name,25,stdin);
		name[strlen(name)-1]='\0';
		printf("enter your age");
		scanf("%d",&age);
		getchar(); // this  is used to remove new line from the code
		printf("your name is-- %s\n",name);
		printf("your age is-- %d\n",age);
	}
	int main(){
		char name[25];
		int age;
		

		student_info(name,age);
		student_info(name,age);
		return 0;
	}

    // other program based on function on user input 

    #include<string.h>
void student_info(char name[25],int age,char branch[10]) {
  
  printf("enter your name");
  fgets(name,25,stdin);      // NOTE:- we do not use & in scanf in case of array string 
  name[strlen(name)-1]='\0'; // null terminator used to deal with new line 
  printf("enter your age");
  scanf("%d",&age);
  getchar();
  printf("enter your branch");
  fgets(name,25,stdin);
  name[strlen(name)-1]='\0';
  printf("%s\n",name);
  printf("%d\n",age);
  printf("%s\n",branch);
}
int main(){
  char name[25]; 
  int age;
  char branch[10];
  student_info(name,age,branch);
  student_info(name,age,branch);
  //student_info(name,age,branch);

  return 0;

  }

   









