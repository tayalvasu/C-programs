#include <stdio.h>
int main()
{
//Compare Two strigs using Pointers
char string1[50],string2[50],*str1,*str2;
int i,equal = 0;
printf("Enter The First String: ");
scanf("%s",string1);
printf("Enter The Second String: ");
scanf("%s",string2);
str1 = string1;
str2 = string2;
while(*str1 == *str2)
{
if ( *str1 == '\0' || *str2 == '\0' )
break;
str1++;
str2++;
}
if( *str1 == '\0' && *str2 == '\0' )
printf("\nBoth Strings Are Equal.");
else
printf("\nBoth Strings Are Not Equal.");
}
// program 11