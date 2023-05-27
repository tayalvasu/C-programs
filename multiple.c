#include<stdio.h>
void check(int);
void main()
{
    int n;
    printf("enter marks");
    scanf("%d",&n);
    check(n);
}
void check(int n)
{
    if(n%5==0)
    printf("yes no is multiple of 5");
    else
    printf("no number is not multiple of 5");
}
