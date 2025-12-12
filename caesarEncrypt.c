#include <stdio.h>
#include <ctype.h>

int main() {
    char text[200];
    int key;

    printf("Enter text to encrypt: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter shift key: ");
    scanf("%d", &key);

    printf("Encrypted text: ");

    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];

        if (isupper(ch)) {
            ch = ((ch - 'A' + key) % 26) + 'A';
        }
        else if (islower(ch)) {
            ch = ((ch - 'a' + key) % 26) + 'a';
        }

        putchar(ch);
    }

    return 0;
}
