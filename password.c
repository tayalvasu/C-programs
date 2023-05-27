#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main()
{
    int length, num_digits, num_uppercase;
    char password[100]; 

    srand(time(0));

    printf("Password length: ");
    scanf("%d", &length);

    printf("Number of digits: ");
    scanf("%d", &num_digits);

    printf("Number of uppercase characters: ");
    scanf("%d", &num_uppercase);

    if (num_digits + num_uppercase > length)
    {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = 0; i < length; i++)
    {
        password[i] = rand() % 26 + 'a';
    }
    password[length] = '\0'; // terminate the string

    for (int i = 0; i < num_uppercase; )
    {
        int index = rand() % length;
        if (isupper(password[index]))
        {
            continue;
        }
        password[index] = rand() % 26 + 'A';
        i++;
    }

    for (int i = 0; i < num_digits; )
    {
        int index = rand() % length;
        if (isdigit(password[index]))
        {
            continue;
        }
        password[index] = rand() % 10 + '0';
        i++;
    }

    printf("Your password is %s\n", password);
    return 0;
}
