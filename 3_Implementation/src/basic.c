#include"basic.h"
void basics()
{
    int operator;
    float num1,num2;
    int n1,n2;
    printf("Enter An operator  1(Addition)--2(Subtraction)--3(Multiplication)--4(Division)--5(Remainder): ");

    scanf("%d", &operator);


  switch (operator)
  {
       case 1 :
    printf("Enter the first Number: ");
    scanf("%f", &num1);
    printf("Enter the Second Number: ");
    scanf("%f", &num2);
    add(num1,num2);
    
      //printf("%d",num1+num2);
      break;

   case 2 :
    printf("Enter the first Number: ");
    scanf("%f", &num1);
    printf("Enter the Second Number: ");
    scanf("%f", &num2);
    sub(num1,num2);
    
       //  printf("%d",num1-num2);
      break;

   case 3 :
   printf("Enter the first Number: ");
    scanf("%f", &num1);
    printf("Enter the Second Number: ");
    scanf("%f", &num2);
    mul(num1,num2);

      //  printf("%d",num1*num2);
      break;

   case 4 :
   printf("Enter the first Number: ");
    scanf("%f", &num1);
    printf("Enter the Second Number: ");
    scanf("%f", &num2);
    divd(num1,num2);

       //  printf("%f",number1/number2);
      break; 

 case 5:
       printf("Enter the first Number: ");
    scanf("%d", &n1);
    printf("Enter the Second Number: ");
    scanf("%d", &n2);
    remb(n1,n2);
    
      //printf("%d",num1%num2);
      break;
  }
}
float add(float a,float b)
{
    return a+b;
}
float sub(float c,float d)
{
    return c-d;
}
float mul(float e,float f)
{
    return e*f;
}
float divd(float g,float h)
{
    return g/h;
}
int remb(int i,int j)
{
    printf("%d",i%j);
    //return i%j;

}