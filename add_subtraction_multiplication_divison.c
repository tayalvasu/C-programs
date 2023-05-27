#include<stdio.h>
int main()
{
int sum,difference,product,modulo,a,b;
float quotient;
printf("\nenter first number");
printf("\nenter second number"); 
scanf("%d%d",&a,&b);
sum=a+b;
difference=a-b;
product=a*b;
quotient=(float)a/b;
modulo=a*b;
printf("\n difference=%d",difference);
printf("\n sum=%d",sum);
printf("\n product=%d",product);
printf("\n remiander=%d",modulo);
printf("\n divison=%f",quotient);

return 0;
}