#include<stdio.h>
void main()
{
	int i=1,j=1,table;
	while(j<=10) {

     table=j;
	 i=1;
	 while(i<=10){
	 	printf("%d\t",table*i);
	 	i=i+1;
	 }
	 j=j+1;
}
printf("\n");

}
