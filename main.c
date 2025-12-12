#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int age;
    char grade;
    char dpt[30];
    float gpa = 0.0f;
    char name[30];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your Programme( or Department): ");
    scanf("%29s", dpt);

    // Clear input buffer before taking string input for name
    getchar();

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline from fgets input if present
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("\n--- Summary ---\n");
    printf("GPA: %.2f\n", gpa);
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Programme: %s\n", dpt);

    printf("    /|\n");
    printf("   / |\n");
    printf("  /  |\n");
    printf(" /   |\n");
// printf("");
// printf("");

    return 0;
}
