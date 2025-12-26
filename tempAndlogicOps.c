//
// Created by ad on 12/26/25.
//

#include <stdio.h>
#include <math.h>

int main() {
    int temp;

    printf("Enter The temperature(C°): ");
    scanf("%d", &temp);

    // if (temp > 0) {
    //     printf("The temperature is Good 🤤");
    // }else if (temp < 30) {
    //     printf("The temperature is Good 😪");
    // }else {
    //     printf("The temperature is Bad 🥵");
    // }

    // if (temp > 0 && temp < 100) {
    //     printf("The temperature is Good 🤤");
    // }else if (temp < 30) {
    //     printf("The temperature is Good 😪");
    // }else {
    //     printf("The temperature is Bad 🥵");
    // }

    if (temp <= 0 || temp >= 30) {
        printf("The temperature is Bad 🥵");
    }else {
        printf("The temperature is Good 🤤");
    }
}