#include <stdio.h>
#include <ctype.h>

// ASCII : American Standard Code for Information Interchange.

int main() {
    char line[200];

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    printf("Converted text: ");

    for (int i = 0; line[i] != '\0'; i++) {
        line[i] = islower(line[i]) ? toupper(line[i]) :
                  isupper(line[i]) ? tolower(line[i]) :
                  line[i];
        putchar(line[i]);
    }

    return 0;
}
// }
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char line[200];
//     int i = 0;

//     printf("Enter a line of text: ");
//     fgets(line, sizeof(line), stdin);

//     printf("Converted text: ");

//     while (line[i] != '\0') {
//         char ch = line[i];

//         if (islower(ch)) {
//             ch = toupper(ch);
//         }
//         else if (isupper(ch)) {
//             ch = tolower(ch);
//         }

//         line[i] = ch;
//         putchar(line[i]);
//         i++;
//     }

//     return 0;
// }
