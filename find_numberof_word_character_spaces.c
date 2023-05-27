#include <stdio.h>

int main() {
    char sentence[1000];
    int i, charCount=0, wordCount=1, spaceCount=0;

    printf("Enter a sentence: ");
    gets(sentence);

    for (i=0; sentence[i]!='\0'; i++) {
        charCount++;

        if (sentence[i] == ' ')
            spaceCount++;

        if (sentence[i] == ' ' && sentence[i+1] != ' ')
            wordCount++;
    }

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of spaces: %d\n", spaceCount);

    return 0;
}
