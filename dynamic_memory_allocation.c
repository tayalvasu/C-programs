#include<stdio.h>
#include<stdlib.h>

int main()
{
    // write a program to store the prices of 5 times

    /*float *ptr;
   ptr=(float *)malloc(5 * sizeof(float));
   ptr[0] = 74; 
   ptr[1] = 52;
   ptr[2] = 50;
   ptr[3] = 63;
   ptr[4] = 47;

   ptr =(float *) calloc(5, sizeof(float));

    for (int i =0; i<5;i++)
    {
        printf("%f\n",ptr[i]);
    }

    // wrie a program to allocate memory of size n , where n is entered by the user

int *p;
int n;
printf("enter n :");
scanf("%d",&n);
p = (int *) calloc(n, sizeof(int));

for (int i=0;i<n;i++)
{
    printf("%d\n",p[i]);
}

// free the memory allocated with calloc
free(p);
p = (int *) calloc(4,sizeof(int));
for (int i=0; i<4;i++)
{
    printf("%d\n",p[i]);
}

// allocate memory for 5 numbers. the dynamically increase it to 8 numbers
int *str;
str = (int *) calloc(5,sizeof(int));
 
 printf("enter numbers (5) :");
 for (int i=0;i<5;i++)
 {
    scanf("%d",&str[i]);
 }

 str = realloc(str,8);
 printf("enter numbers(8) : ");
 for (int i=0; i<8;i++)
 {
    scanf("%d\n",&str[i]);
 }

 for (int i=0;i<8;i++)
 {
    printf("numbers %d is %d ", i, str[i]);
 }
 
 // create an array of size 5(using calloc) & enter its values from the user
 int *str;
str = (int *) calloc(5,sizeof(int));
 
 printf("enter numbers (5) :");
 for (int i=0;i<5;i++)
 {
    scanf("%d",&str[i]);
 }


 for (int i=0;i<5;i++)
 {
    printf("numbers %d is %d ", i, str[i]);
 }
 */
 // allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even numbers
 int *ptr;
 ptr = (int *) calloc(5, sizeof(int));
 printf("odd numbers\n");
   ptr[0] = 1; 
   ptr[1] = 3;
   ptr[2] = 5;
   ptr[3] = 7;
   ptr[4] = 9;
   for (int i=0;i<5;i++)
   {
    printf("%d\n",ptr[i]);
   }

   ptr = realloc(ptr,6);
   printf("even numbers\n");
   ptr[0] = 2; 
   ptr[1] = 4;
   ptr[2] = 6;
   ptr[3] = 8;
   ptr[4] = 10;
   ptr[5] = 12;
   for (int i=0;i<5;i++)
   {
    printf("%d\n",ptr[i]);
   }
   free(ptr);
    return 0;
}
// dynamic memory allocation allcates the memory on run time not compile time
// maaloc function : means memory allocation in malloc we defined how much bytes we need
// syntax : ptr =(*int) malloc (5*sizeof(int));
// calloc function : means continuous memory allocation like array in calloc function we defined size per location like 5,4 etc.
// syntax : ptr =(*int) calloc (5,sizeof(int));
// free() function :we use it to free memory that is allocated using mallaoc & calloc
// syntax : free(ptr);
// realloc() function : reallocate (increase or decrease) memory using the same pointer & size
// syntax : ptr = realloc(p,new size);