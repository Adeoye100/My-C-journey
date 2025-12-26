#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float F;
    float C;
    char choice = '\0';

    printf("\nTemperature Coversion Programme\n");
    printf("C. Celcius to Fahrenheit\n");
    printf("F. Fahrenheit to celcius\n");

    printf("Enter your choice(C or F): ");
    scanf("%c", &choice);


if (choice == 'F' || choice == 'f'){
    printf("Enter your temperature in Fahrenheit: ");
    scanf("%f", &F);
    C = (5.0 / 9.0) * (F - 32);
    printf("%.1f Fahrenheit is equal to %.1f Celcius\n", F, C);

}else if(choice == 'C' || choice == 'c'){
    printf("Enter you temperature in Celcius: ");
    scanf("%f", &C);
    F = (C * (9.0 / 5.0)) + 32;
    printf("%.1f Celcius is equal to %.1f Fahrenheit\n", C, F);
}else{
    printf("Invalid choice! Please select C or F\n");
}
    return 0;
}
