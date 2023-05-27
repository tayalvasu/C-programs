#include<stdio.h>
#include<string.h>
void main()
{
	//Converting the string into lower case and upper case. 
	char s1[20];
	printf("\nEnter string: ");
	scanf("%s",s1);
	
	printf("\nString in lower case: %s",strlwr(s1));
	printf("\nString in upper case: %s",strupr(s1));
}
