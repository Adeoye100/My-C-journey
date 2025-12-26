
#include <stdio.h>
#include <math.h>

int main() {

     //Calculator Programme

     char operator = '\0';
     double num1, num2 = 0.0;
     double result = 0.0;

     printf("\n<--CALCULATOR PROGRAM-->\n");

     printf("Enter the first Number: ");
     scanf("%lf", &num1);

     printf("Please enter an operator (+, -, *, /): ");
     scanf(" %c", &operator); //clear the \n from input buffer

     printf("Enter Second Number: ");
     scanf("%lf", &num1);

     switch (operator) {
          case '+':
               result = num1 + num2;
               break;

          case '-':
               result = num1 + num2;
               break;

          case '/':
               if (num2 == 0) {
                    printf("You can't divide By zero, Lol 🫠\n");
               }else {
                    result = num1 + num2;
               }
               break;

          case '*':
               result = num1 + num2;
               break;

          default:
               printf("Enter a valid Operator 🙂, Thank you!\n");
     }

     printf("Result: %.2lf\n", result);
     return 0;

}