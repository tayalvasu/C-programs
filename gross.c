#include<stdio.h>
void main()
{
    int bs,hra,da,ta,gs;
    printf("ENTER BASIC SALARY");
    scanf("%d",&bs);

    hra=(15*bs)/100;
    printf("HRA: %d",hra);

    da=(5*bs)/100;
    printf("\nDA: %d",da);

    ta=(2*bs)/100;
    printf("\nTA: %d",ta);
    
    gs= bs-hra-da-ta;
    printf("\nGROSS SALARY :%d",gs);
}