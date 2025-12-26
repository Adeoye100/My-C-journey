#include <stdio.h>
/*
 Switch: A better and efficient alternative to using "if-else" statement  
  more efficient when using fixed values. */
 int main(){

    char dayOfWeek= '\0';

    printf("Enter a day of the week(M, T, W, H, F, S, U): ");
    scanf("%f", &dayOfWeek);

    switch (dayOfWeek)
    {
    case 'M':
        printf("It's Monday\n");
        break;
    
    case 'T':
        printf("It's Tuesday\n");
        break;

    case 'W':
        printf("It's Wednesday\n");
        break;

    case 'H':
        printf("It's Thursday\n");
        break;

    case 'F':
        printf("It's Friday\n");
        break;

    case 'S':
        printf("It's Saturady\n");
        break;

    case 'U':
        printf("It's Sunday\n");
        break;

    default:
        printf("Please Enter only (M, T, W, H, F, S, U))\n");
        break;
    }
    return 0; 
}