#include<stdio.h>
int main(){
    printf("my name is sambhav\n"); // printf statement is used to display a text on a screen//
    printf("i like RRD2");
    return 0;   
}

   // vaarible //

   //%d is used for int printing in c//

   int main(){
    int age=25;    // int is used for inteager //
    printf("your age is %d",age);
    return 0;    
}

  // %f is used for float -decimal //

  int main(){
   float cgpa=9.1;
   float price=22.98;
   float interst =1.5;
   printf("your cgpa is%f",cgpa);
   printf("the price of apple is%f");
   return 0;
}

           //DOUBLE//

 // double is used for decimal of decimal point of 15 to 16//
 
 int main(){
    double pi=3.141234567890;
    double e=2.71234567;              // %lf is used for double//
    printf("value of pie is %.12lf\n",pi); //in c we get 6 decimal place by default but if//
    printf("value of e is %.8lf\n",e);    // we want to increase the decimal place or decrease it//
    return 0;                             // we can place %.(and value)format specifer//

}

              //CHAR// // used to store character & its format specifier is %C//

int main(){
    char grade='A';
    char symbol='#';
    printf("your grad is %c\n",grade);
    printf("the symbol is %c\n",symbol);
    return 0;
}

//(strings) array=char varible[]//    // in c we do not have strings we have array//

int main (){
    char name[]="my name is sambhav\n";
    char college[]="i am a student at kiet\n"; //%s is used for array(string)-format specifer//
    char branch[]="my branch is CS";
    printf("name=%s",name);
    printf("college=%s",college);
    printf("branch=%s",branch);
    return 0;
}

         //BOOL//   //%d is used for bool//

   // it gives only two value 1 if true & 0 if false//

   #include<stdbool.h>
    int main(){
    bool online=false;
    if(online){
        printf("you are online");
    }
    else{
        printf("you are not online");
    }  
    return 0;    
}

   // Format specifier = special tokens that begin with a % symbol,
   //                    followed by a character that specifies the data
   // and optional modifiers (width,precision,flags)
   //They control how data is displayed or interpreter 

   int main(){
    int age=19;    //%d//
    float gpa=7.5;  //%f//
    double pi=3.14567; //%lf//
    char grade='A';  //%c//
    char name[]="my name is sambhav";  //%s//
    printf("%d\n",age);
    printf("%f\n",gpa);
    printf("%lf\n",pi);
    printf("%c\n",grade);
    printf("%s\n",name);
    return 0;
}

     //WIDTH//

     int main(){
    int num1=1;
    int num2=10;
    int num3=100;
    printf("%3d\n",num1); // now 1 also has three spaces//
    printf("%3d\n",num2);
    printf("%3d\n",num3);
        //OR//              //// left gestify -- to get sapaces at right//
    printf("%-3d\n",num1);
    printf("%-3d\n",num2);
    printf("%-3d\n",num3);
    //PRECEDING WITH 0//
    printf("%04d\n",num1);
    printf("%04d\n",num2);
    printf("%04d\n",num3);   
   // sign(+)--when we place + sign b/w % and d then it tell sign of all //
    printf("%+d\n",num1);
    printf("%+d\n",num2);
    printf("%+d\n",num3);

    return 0;
}

// how to limit decimal place in c as it has 6//

int main(){
    float num1=112;
    float num2=10.123;
    float num3=100.312;
    printf("%f\n",num1);
    printf("%.3f\n",num2);
    printf("%.3f\n",num3);
    return 0;
}

// arithmetic operators=+,-,*,/,% //

int main(){
    int x=2;
    int y=3;
    int z;
    z=x+y;  //if int is used then decimal part is truncated//
    z=y-x;
    z=x*y;
    z=y/x;
    printf("%d",z);
    return 0;
}

// ++--increment operator =this operator increases the value by 1

int main(){
    int a=1;
    a++;
    printf("%d",a);
    return 0;
}

// augmented assignment operators//

//x+=3
//x-=3
//x*=2
//x/=2

int main (){
    int a=3;
    a+=4;
    printf("%d",a);
    return 0;
}







   





   
  

















