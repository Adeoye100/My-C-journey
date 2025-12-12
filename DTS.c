
// #include <stdio.h>

// int main() {
//     printf("Size of char: %zu byte\n", sizeof(char));
//     printf("Size of int: %zu bytes\n", sizeof(int));
//     printf("Size of float: %zu bytes\n", sizeof(float));
//     printf("Size of double: %zu bytes\n", sizeof(double));
//     printf("Size of long int: %zu bytes\n", sizeof(long int));
//     return 0;
// }
#include <stdio.h>

int main() {
    printf("Data Type Sizes on This System:\n");
    printf("------------------------------\n");
    // Using %zu format specifier which is correct for sizeof() return type (size_t)
    printf("Size of char:        %zu byte(s)\n", sizeof(char));
    printf("Size of short int:   %zu byte(s)\n", sizeof(short int));
    printf("Size of int:         %zu byte(s)\n", sizeof(int));
    printf("Size of long int:    %zu byte(s)\n", sizeof(long int));
    printf("Size of long long int: %zu byte(s)\n", sizeof(long long int));
    printf("Size of float:       %zu byte(s)\n", sizeof(float));
    printf("Size of double:      %zu byte(s)\n", sizeof(double));
    printf("Size of long double: %zu byte(s)\n", sizeof(long double));
    printf("Size of pointer:     %zu byte(s)\n", sizeof(void*));
    
    return 0;
}
