#include<stdio.h>

int is_palindrome(int num) {
    int reversed =0;
    int orignal_number = num;
    // lets reverse the number
    while (num !=0)
    {
        reversed = reversed*10+ num %10;
        num = num/10;
    }
    printf("the reversed number is %d\n",reversed);
    if (orignal_number == reversed)
    {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int number;

    printf("Enter a number to check whether it is a palindrome or not: ");
    scanf("%d", &number);
    // now implement this function
    if (is_palindrome(number))
    {
        printf("this number is a palindrome");
    }
    
    else {
        printf("this number is not a palindrome");
    }

    return 0;
}
