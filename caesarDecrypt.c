// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void decrypt(char *s, int k) {
//     for (; *s; s++) {
//         if (isupper(*s)) *s = (*s - 'A' - k + 26) % 26 + 'A';
//         else if (islower(*s)) *s = (*s - 'a' - k + 26) % 26 + 'a';
//     }
// }

// int main() {
//     char text[500];
//     int key, auto_mode = 0;

//     printf("Enter ciphertext: ");
//     fgets(text, sizeof(text), stdin);
//     text[strcspn(text, "\n")] = 0;

//     printf("Do you know the key? (y/n): ");
//     if (tolower(getchar()) != 'y') auto_mode = 1;

//     if (!auto_mode) {
//         printf("Enter key: ");
//         scanf("%d", &key);
//         decrypt(text, key % 26);
//         printf("Result: %s\n", text);
//     } else {
//         printf("\nTrying all keys:\n\n");
//         for (key = 0; key < 26; key++) {
//             char temp[500];
//             strcpy(temp, text);
//             decrypt(temp, key);
//             printf("Key %2d: %s\n", key, temp);
//         }
//     }
//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// List of very common English words (you can expand this)
const char *common_words[] = {
    "the", "be", "to", "of", "and", "a", "in", "that", "have",
    "it", "for", "not", "on", "with", "he", "as", "you", "do",
    "at", "this", "but", "his", "by", "from", NULL
};

// Function to check if decrypted text contains common English words
int looks_like_english(const char *text) {
    char word[50];
    int i = 0, j = 0;
    int found = 0;

    while (text[i]) {
        if (isalpha(text[i])) {
            word[j++] = tolower(text[i]);
        } else if (j > 1) {  // end of word
            word[j] = '\0';
            for (int k = 0; common_words[k] != NULL; k++) {
                if (strcmp(word, common_words[k]) == 0) {
                    found++;
                    if (found >= 3) return 1;  // 3+ common words = likely English
                }
            }
            j = 0;
        }
        i++;
    }
    return found >= 2;  // at least 2 common words
}

// Function to decrypt with a given key
void decrypt_caesar(const char *ciphertext, int key, char *plaintext) {
    for (int i = 0; ciphertext[i] != '\0'; i++) {
        char ch = ciphertext[i];
        if (isupper(ch)) {
            plaintext[i] = ((ch - 'A' - key + 26) % 26) + 'A';
        } else if (islower(ch)) {
            plaintext[i] = ((ch - 'a' - key + 26) % 26) + 'a';
        } else {
            plaintext[i] = ch;  // keep spaces, punctuation
        }
    }
    plaintext[strlen(ciphertext)] = '\0';
}

int main() {
    char ciphertext[500];
    char decrypted[500];
    int choice;

    printf("=== Caesar Cipher Breaker ===\n");
    printf("1. Decrypt with known key\n");
    printf("2. Brute force all 26 keys (show all)\n");
    printf("3. Auto-detect correct key (smart mode)\n");
    printf("Choose mode (1-3): ");
    scanf("%d", &choice);
    getchar();  // consume newline after scanf

    printf("Enter encrypted text: ");
    fgets(ciphertext, sizeof(ciphertext), stdin);
    ciphertext[strcspn(ciphertext, "\n")] = 0;  // remove newline

    printf("\n");

    if (choice == 1) {
        int key;
        printf("Enter the shift key: ");
        scanf("%d", &key);
        key = (key % 26 + 26) % 26;  // make positive

        decrypt_caesar(ciphertext, key, decrypted);
        printf("Decrypted (key %d): %s\n", key, decrypted);

    } else if (choice == 2) {
        printf("Brute Force Results:\n");
        printf("----------------------------------------\n");
        for (int key = 0; key < 26; key++) {
            decrypt_caesar(ciphertext, key, decrypted);
            printf("Key %2d: %s\n", key, decrypted);
        }

    } else if (choice == 3) {
        printf("Smart Detection Mode (looking for English)...\n");
        printf("----------------------------------------\n");

        int best_key = -1;
        int max_words = 0;

        for (int key = 0; key < 26; key++) {
            decrypt_caesar(ciphertext, key, decrypted);
            int word_count = 0;

            // Simple word counter for common words
            char temp[500];
            strcpy(temp, decrypted);
            char *token = strtok(temp, " ,.!?\"\n");
            while (token) {
                for (int w = 0; common_words[w]; w++) {
                    if (strcasecmp(token, common_words[w]) == 0) {
                        word_count++;
                    }
                }
                token = strtok(NULL, " ,.!?\"\n");
            }

            if (word_count > max_words) {
                max_words = word_count;
                best_key = key;
            }

            if (word_count > 0) {
                printf("Key %2d [Score: %d] → %s\n", key, word_count, decrypted);
            }
        }

        if (best_key != -1) {
            decrypt_caesar(ciphertext, best_key, decrypted);
            printf("\nBEST MATCH (Key %d):\n", best_key);
            printf(">>> %s <<<\n", decrypted);
        } else {
            printf("Could not detect English. Try brute force mode.\n");
        }
    }

    return 0;
}