#include <stdio.h>

int main() {
    int n, num, largest, smallest, i;

    printf("Enter the number of integers to be entered: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);

    // Initialize largest and smallest with the first number
    scanf("%d", &num);
    largest = num;
    smallest = num;

    for (i=1; i<n; i++) {
        scanf("%d", &num);

        if (num > largest)
            largest = num;

        if (num < smallest)
            smallest = num;
    }

    printf("Largest number is %d\n", largest);
    printf("Smallest number is %d\n", smallest);

    return 0;
}
