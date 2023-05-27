#include <stdio.h>

int main() {
    float basicSalary, allowances, deductions, totalSalary;
    
    // Input basic salary, allowances, and deductions
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    
    printf("Enter allowances: ");
    scanf("%f", &allowances);
    
    printf("Enter deductions: ");
    scanf("%f", &deductions);
    
    // Calculate total salary
    totalSalary = basicSalary + allowances - deductions;
    
    // Display the total salary
    printf("Total salary: %.2f\n", totalSalary);
    
    return 0;
}
