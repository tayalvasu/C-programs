#include<stdio.h>

  int globalvar = 10;

int main ()
{
    int localvar =10;
    register int  registervar = 30;
    {
        static int staticvar =40;
        printf("Static variable  inside block: %d\n");
    }

    printf("Automatic variable inside main function: %d\n",localvar);
    printf("Register variable inside main function: %d\n",registervar);
    printf("Global variable inside main function: %d\n",globalvar);

    functionwithstatic();

    return 0;
}

void functionwithstatic() {
    static int staticvar = 50;
    printf("Static variable inside function : %d\n",staticvar);
}