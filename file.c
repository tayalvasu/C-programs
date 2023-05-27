#include<stdio.h>
int main() {
    FILE *fptr;
    fptr = fopen ("hello.txt","r");
    char ch;
    ch = fgetc(fptr);
    while (ch != EOF)
    {
       printf("%c",ch);
       ch = fgetc(fptr);
    }
    printf("\n");
    
    //fputs("mango\n",fptr);

    /*printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));
    printf("%c\n",fgetc(fptr));*/

  fclose(fptr);

    return 0;
}
