#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int num1;
    int num2;
    int num3;


    printf("Enter the first number: \n");
    scanf("%d", &num1);

    printf("Enter the second number: \n");
    scanf("%d", &num2);

    printf("Enter the third number: \n");
    scanf("%d", &num3);


    printf("\n--summary--\n");
    printf("addition: %d\n", num1 + num2 + num3);
    printf("subtarct: %d\n", num1-num2-num3);
    printf("Multiply: %d\n", num1 * num2 * num3);
    printf("Division: %d\n", num1/num2/num3);
    return 0;
}
