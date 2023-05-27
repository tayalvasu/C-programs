#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter rows \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
        printf("*");
        printf("_");
        }
        printf("\n");
    }
    return 0;
}
//program for printing the pattern
