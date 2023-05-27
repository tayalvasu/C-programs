#include<stdio.h>
#include<string.h>
int main () {
   int L1,L2;
   int i=0,j=0;
   char s1[50],s2[50];
   printf("enter string1");
   scanf("%s",s1);
   printf("Enter string 2");
   scanf("%s",s2);
   while(s1[i]!='\0')
   {
   i++;
   }
   while(s2[j]!='\0')
   {
   j++;
   }
   int m =0;
   int k=0;
   for(k=i;k<i+j;k++)
   {
   s1[k]=s2[m];
   m++;
   }
   s1[k]='\0';
   printf("Concatenated String :%s",s1);

   return 0;
}
