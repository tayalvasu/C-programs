#include <stdio.h>

int main() {
    FILE* fp;
    const char* message = "Hello, world!\n";

    fp = fopen("hello.txt", "w");
    fprintf(fp, "%s", message);
    fclose(fp);

    fp = fopen("hello.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
