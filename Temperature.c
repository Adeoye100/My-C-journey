#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// From Fahrenheit to Celcius
int main()
{
    /*Converting from Celcius to Fahrenheit using formula:
    C = 5/9(F - 32).

    Input Values: 68, 150, 212, 0, -22, -200 in (F°).
    Output: 20.00, 65.56, 100.00, -17.78, - 30.00, -128.89 (C°).
    */
    float F, C;
    char celsius = 'C';

    printf("Enter your Fahrenheit temperature: ");
    scanf("%f", &F);

    C = (5.0 / 9.0) * (F - 32);

    printf("The temperature in Celcius: %.2f%c\n", C, celsius);

    return 0;
}
