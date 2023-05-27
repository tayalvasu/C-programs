#include<stdio.h>

int main()
{
    int number = 50;
    int *p; 
    p = &number; 
    printf("Address of p is %u\n", p);
    p++;
    printf("After incrementing, address of p is %u\n", p);  

    int num = 40;
    int *ptr; 
    ptr = &num; 
    printf("Address of ptr is %u\n", ptr);
    ptr--;
    printf("After decrementing, address of ptr is %u\n", ptr); 

    int n = 20;
    int *tr;
    tr = &n;
    printf("Address of tr is %u\n", tr);
    tr = tr+3;
    printf("After adding an integer, address of tr is %u\n", tr);

    int a = 70;
    int *r;
    r = &a;
    printf("Address of r is %u\n", r);
    r = r-3;
    printf("After subtracting an integer, address of r is %u\n", r);

    int d = 20;
    int *o = &d;
    int _d = 58;
    int *_o = &_d;

    printf("Difference = %u\n", o - _o);

    _o = &d;
    printf("Comparison = %u\n", d == _d);

    return 0;
}
