#include <stdio.h>

int main() {
    char name[100]; // Declare an array to store the name (maximum 99 characters + 1 for null terminator)

    printf("Enter your name: ");
    scanf("%99s", name);

    printf("Hello, %s!\n", name);
    return 0;
}
