#include <stdio.h>

int main(){
    int Num;

    printf("Enter a number: ");
    scanf("%d", &Num);

    if (Num > 0){
        printf("The number is greater than 0\n");
    }else{
        printf("The number is less than 0\n");
    }

    return 0;
}
