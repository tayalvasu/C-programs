#include<stdio.h>
int main()
{
    int nums[100] , target ,n,i,found=0;
    printf("Enter the size of the array :");
    scanf("%d", &n);

    printf("Enter the elements of the array :");
    for (i=0;i<n;i++)
    {
        scanf("%d",&nums[i]);
    }

    printf("Enter the number you want to search :");
    scanf("%d",&target);

    for (i=0;i<n;i++)
    {
        if (nums[i] == target)
        {
            found =1;
        }
    }
    
    if (found)
    {
        printf("The number %d was found in the array .\n",target);
    } else {
        printf("The number %d was not found in the array.\n",target);
    }

    return 0;
}