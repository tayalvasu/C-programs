#include<stdio.h>
int main()
{
    int age=22;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d\n",age);

   // printing the address by the three methods
    printf("%p\n",&age);
    printf("%p\n",ptr);
    printf("%p\n",&ptr);

      // there are three methods to print the data in the pointers
      printf("%d\n",age);
      printf("%d\n",*ptr);
      printf("%d\n",*(&age));

}