#include <stdio.h>

int main()
{

    int num1, num2, num3;
    int oneOrtwo = num1 > num2;
    int oneOrthree = num1 > num3;
    int twoOrone = num2 > num1;
    int twoOrthree = num2 > num3;

    printf("Enter Your  1st Number: ");
    scanf("%d", &num1);

    printf("Enter Your 2nd Number: ");
    scanf("%d", &num2);

    printf("Enter Your 3rd Number: ");
    scanf("%d", &num3);

    if (oneOrtwo && oneOrthree)
    {
        printf("%d is the largest number\n", num1);
    }

    else if (twoOrone && twoOrthree)
    {
        printf("%d is the largest number\n", num2);
    }
    else
    {
        printf("%d is the largest number\n", num3);
    }

    return 0;
}
