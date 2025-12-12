#include <stdio.h>

int main() {
    float salary, tax;
    char gender;

    // Input
    printf("Enter employee salary ($): ");
    scanf("%f", &salary);

    printf("Enter employee gender (M/F): ");
    scanf(" %c", &gender);

    // Processing
    if (gender == 'M' || gender == 'm') {
        tax = 0.10 * salary;
    } 
    else if (gender == 'F' || gender == 'f') {
        tax = 0.05 * salary;
    } 
    else {
        tax = 0;
        printf("Invalid gender entered!\n");
    }

    // Output
    printf("Tax payable: $%.2f\n", tax);

    return 0;
}