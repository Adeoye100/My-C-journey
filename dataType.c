#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int wholeNum;
    double decimalNum;
    float longdecNum;
    char leta[30];
    
    printf("Enter a whole number: ");
    scanf("%d", &wholeNum);

    printf("Enter a decimal number: ");
    scanf("%lf", &decimalNum);

    printf("Enter another: ");
    scanf("%f", &longdecNum);

    getchar();
    printf("Enter a statement: ");
    fgets(leta, sizeof(leta), stdin);
    // scanf(" %s", &leta);

    printf("\n<--DataType Summary-->\n");
    printf("\nThis is Integer: %d\n", wholeNum);
    printf("This is double: %.2lf\n", decimalNum);
    printf("This is float: %.2f\n", longdecNum);
    printf("This is character: %s\n", leta);
    return 0;
}