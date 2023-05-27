#include <stdio.h>

int main() {
    int units;
    float rate, bill;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units >= 0 && units <= 500) {
        rate = 5.50;
    } else if (units >= 501 && units <= 1000) {
        rate = 6.00;
    } else {
        rate = 8.00;
    }

    bill = units * rate;
    printf("Electricity Bill: %.2f\n", bill);

    return 0;
}
