#include <stdio.h>

int main() {
    
    char word[6];
    printf("Enter a 5-letter word: ");
    scanf("%5s", word);

    printf("Encoded word: ");

    for (int i = 0; i < 5; i++) {
        char encoded = word[i] - 30;
        printf("%c", encoded);
    }

    printf("\n");

    return 0;
}
