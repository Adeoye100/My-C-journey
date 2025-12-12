#include <stdio.h>
#include <string.h>

int main(){

      //Shoppinf Cart/Supermarket
    char item[50] = "";
    float price = 0.0f;
    int quantity;
    char currency = '$';
    float total = 0.0f;

    printf("What Item will you like to purchase?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("what's the price of the Item?: ");
    scanf("%f", &price);

    printf("How many would you like?:   ");
    scanf("%d", &quantity);

    total = price * quantity;

    printf("\nYou have bought %d %s(s)\n", quantity, item);
    printf("The Total is: %c%.2f\n", currency, total);

    return 0;
    
}

























