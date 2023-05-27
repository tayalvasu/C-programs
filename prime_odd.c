#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the limit (n): ");
    scanf("%d", &n);
    
    printf("Prime numbers up to %d are:\n", n);
    
    for (int number = 2; number <= n; number++) {
        int isPrime = 1;
        
        for (int i = 2; i * i <= number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", number);
        }
    }
    
    printf("\n");
    
    return 0;
}
