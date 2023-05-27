#include<stdio.h>
#include<string.h>
void main () {
   int L1,L2;
   int i=0,j=0,k,m;
   char s1[50],s2[50],s3[100];
   printf("enter string1");
   scanf("%s",s1);
   while(s1[i]!='\0')
   {
   i++;
   }
   for(j=0;j<i;j++)
   s2[j]=s1[j];
   s2[j]='\0';
   printf("Copied String :%s",s2);
}
