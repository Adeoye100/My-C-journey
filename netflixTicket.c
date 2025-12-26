#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // true = 1, false = 0.
    float price = 10.00;
    bool isStudent; // 10% discount
    bool isSenior;  // 20% discount
    int studentInput, seniorInput;

    /*
    student = $9
    senior = $8
    student and senior = $7
    */
    printf("\n==Netflix Ticket Calculator==\n");
    printf("Are you a student? (1 for yes, 0 for no): ");
    scanf("%d", &studentInput);
    isStudent = (studentInput == 1);

    printf("Are you a senior? (1 for yes, 0 for no): ");
    scanf("%d", &seniorInput);
    isSenior = (seniorInput == 1);

    if (isStudent)
    {
        if (isSenior)
        {
            printf("You get a Netflix student discount of 10%%\n");
            printf("You get a Netflix senior discount of 20%%\n");
            price *= 0.7;
        }
        else
        {
            printf("You get a student discount of 10%%\n");
            price *= 0.9;
        }
    }
    else
    {
        if (isSenior)
        {
            printf("You get a senior discount of 20%%\n");
            price *= 0.8;
        }
        else
        {
            printf("No discount applies.\n");
        }
    }

    printf("The price of the ticket is: $%.2f\n", price);

    return 0;
}
