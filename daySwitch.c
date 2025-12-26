#include <stdio.h>
// Switch: A better and efficient alternative to using "if-else" statement  
int main(){

    int dayOfWeek;

    printf("Enter a day of the week(1-7): ");
    scanf("%d", &dayOfWeek);

    switch (dayOfWeek)
    {
    case 1:
        printf("It's Monday\n");
        break;
    
    case 2:
        printf("It's Tuesday\n");
        break;

    case 3:
        printf("It's Wednesday\n");
        break;

    case 4:
        printf("It's Thursday\n");
        break;

    case 5:
        printf("It's Friday\n");
        break;

    case 6:
        printf("It's Saturady\n");
        break;

    case 7:
        printf("It's Sunday\n");
        break;

    default:
        printf("Please Enter a proper value (1-7)\n");
        break;
    }
    return 0; 
}