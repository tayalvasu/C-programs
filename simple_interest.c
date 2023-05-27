#include <stdio.h>

int main() {
    float principal, rate, time, interest, totalAmount;

    // Input the principal amount
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    // Input the rate of interest
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    // Input the time period
    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate the simple interest
    interest = (principal * rate * time) / 100;

    // Calculate the total amount
    totalAmount = principal + interest;

    // Display the total amount
    printf("Total amount after calculating simple interest: %.2f\n", totalAmount);

    return 0;
}
