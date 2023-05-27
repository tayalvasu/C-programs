#include<stdio.h>
int main() {
    FILE*sourcefile,*destinationfile;
    char ch;

    sourcefile =fopen("source.txt","r");
    destinationfile= fopen("destination.txt","w");

    if (sourcefile==NULL)
    {
        printf("Unable to open source file\n");
         return 0;
    }
    if (destinationfile == NULL)
    {
        printf("Unable to create destination file\n");
         return 0;
    }
    while ((ch = fgetc(sourcefile))!=EOF)
    {
        fputc(ch,destinationfile);
    }
    printf("File copied successfully\n");
    fclose(sourcefile);
    fclose(destinationfile);
}
