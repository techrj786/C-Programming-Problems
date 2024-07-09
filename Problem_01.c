#include <stdio.h>

int main() {
    int number;

    // Get a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Add 2 to the number
    int result = number + 2;

    // Print the result
    printf("The result is: %d\n", result);

    return 0;
}
