#include<stdio.h>
int main()
{
// illustration of address of (&) operator for getting address
    char ch;
    int x;
    float y;
    ch ='j';
    x =336;
    y =12.5;
    printf("\nAddress of ch =%u",&ch);
    printf("\nValue of ch = %c",ch);
    printf("\nAddress of x =%u",&x);
    printf("\nValue of x = %d",x);
    printf("\nAddress of y =%u",&y);
    printf("\nValue of y = %f\n",y);

  // syntax of pointer
    int age =22;
    //int *ptr;
    //ptr=&age; 
    // or we can write this
  int*ptr=&age;
  //in this method the address of age variable is printing with the help of %p format specifier but in this case the address is shown in the hexadecimal format
  printf("%p\n",&age);
  //to solve the abobe problem we use %u operator it converts the address into unsigned int
  printf("%u\n",&age);
  printf("%u\n",ptr);
  // it shows the value of ptr
  printf("%u\n",&ptr);
  // it shows the address of ptr

  printf("Value of age variable is %d\n ",age);

  // pointers to pointers
  int i =5;
  int *tr =&i;
  int **pptr =&tr;

  printf("%d\n",**pptr);
}