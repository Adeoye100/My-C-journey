#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    float P, R, T, simpleInterest, compoundInterest;

    printf("Enter the price ($): ");
    scanf("%f", &P);
    printf("Enter the rate (percntage): ");
    scanf("%f", &R);
    printf("Enter the time (Year/s): ");
    scanf("%f", &T);

    simpleInterest = (P * R * T) / 100;
    compoundInterest = P * pow((1 + R / 100), T) - P; 
      
    //Or
    //compoundInterest = P * (pow(1 + R / 100, T) - 1);
    /* float rate = 1 + R / 100;
compoundInterest = P * pow(rate, T) - P; */

    printf("\n--S.I and C.I Summary--\n");
    printf("Simple Interest(S.I): %.2f\n", simpleInterest);
    printf("Compound Interest(C.I): %.2f\n", compoundInterest);
    return 0;
}
