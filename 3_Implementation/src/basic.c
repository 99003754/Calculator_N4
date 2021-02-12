#include"basic.h"
void basic()
{
    float number1,number2, result=0;
    int operator;
    printf("Enter the first Number: ");
    scanf("%f", &number1);
    printf("Enter the Second Number: ");
    scanf("%f", &number2);
    
 // User Input Done WIth Two Numbers

    printf("Enter An operator  1(Addition)--2(Subtraction)--3(Multiplication)--4(Division): ");
    scanf("%d", &operator);



  switch (operator)
  {
       
      case 1 :
      printf("%f",number1+number2);
      break;

      case 2 :
         printf("%f",number1-number2);
      break;

       case 3 :
        printf("%f",number1*number2);
      break;

       case 4 :
         printf("%f",number1/number2);
      break; 
  }

//return 0;   
}