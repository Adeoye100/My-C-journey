#include <stdio.h>


int main(){
    int Age;

    printf("Enter Your Age: ");
    scanf("%d", &Age);

    if (Age >= 18){
        printf("You are good to drive 🔑\n");
    }else{
        printf("Commot for here small pikin 😒\n");
    }

    return 0;
}
