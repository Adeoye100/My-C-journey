#include <stdio.h>

int main(){
    float L, B, Area, perimiter;

    printf("Enter the length: ");
    scanf("%f", &L);

    printf("Enter the breadth: ");
    scanf("%f", &B);

    Area = L * B;
    perimiter = 2 * (Area);

    printf("\n//--Rectangle Summary--//\n");
    printf("Area of Rectangle: %.2f\n", Area);
    printf("Perimiter of Rectangle: %.2f\n", perimiter);

    return 0;
}
