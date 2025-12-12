#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int a = 8;
    int b = 3;
    int c = -5;

float x = 8.8, y = 3.5, z = -5.2;

printf("\n ---Questions Number and Answers--- \n");

printf("\n ---3.36--- \n");

printf("a = %d\n", a + b + c);
printf("b = %d\n", 2 * b + 3 * (a - c));
printf("c = %d\n", a / b);
printf("d = %d\n", a % b);
printf("e = %d\n", a / c);
printf("f = %d\n", a % c);
printf("g = %d\n", a * b / c);
printf("h = %d\n", a * (b / c));
printf("i = %d\n", (a * c) % b);
printf("j = %d\n", a * (c % b));

printf("\n ---3.37--- \n");

printf("a = %.2f\n", x + y + z);
printf("b = %.2f\n", 2 * y + 3 * (x - z));
printf("c = %.2f\n", x / y);

// For modulus, cast since %% is not allowed on floats
printf("d = %d\n", (int)x % (int)y);

printf("e = %.2f\n", x / (y + z));
printf("f = %.2f\n", (x / y) + z);
printf("g = %.2f\n", 2 * x / 3 * y);
printf("h = %.2f\n", 2 * x / (3 * y));

return 0;
}
