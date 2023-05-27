#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Error handling for negative numbers
    if (num < 0) {
        printf("Error: Factorial of a negative number doesn't exist.");
        return 0;
    }

    int result = factorial(num);
    printf("Factorial of %d = %d", num, result);

    return 0;
}
