#include <stdio.h>
#include <math.h>

int main()
{
    int n, r, arm = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &n);
    temp = n;

    while (n > 0)
    {
        r = n % 10;
        arm += pow(r, 3);  // Updated line to correctly calculate the Armstrong number
        n = n / 10;
    }

    if (temp == arm)
        printf("ARMSTRONG NUMBER\n");
    else
        printf("NOT ARMSTRONG NUMBER\n");

    return 0;
}
