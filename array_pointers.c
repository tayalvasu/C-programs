#include<stdio.h>
int main()
{
// traverse an array by using pointer
int aadhar[5];

int *ptr=&aadhar[0];
// input
for (int i = 0; i < 5; i++)
{
    printf("%d index : ",i);
    scanf("%d",(ptr+i));
}
// output
for (int i = 0; i < 5; i++)
{
    printf("%d index = %d\n", i, *(ptr+i));
}

return 0;
}
