#include<stdio.h>

//defining the structure
struct student
{
	int sage;
	int smarks;
	char sname[20];
};

void main()
{
	//Structure program (basic defining and using the values.)
	
	//Creating a object of struct. 
	
	struct student s1;
	
	//Getting value of student;
	
	printf("\nEnter the name of student:");
	scanf("%s",&s1.sname);
	printf("\nEnter the marks of student: ");
	scanf("%d",&s1.smarks);
	printf("\nEnter the age of student: ");
	scanf("%d",&s1.sage);
	
	//Accessing data from the struct. 
	printf("\nMarks of student are: %d",s1.smarks);
	printf("\nAge of student is: %d",s1.sage);
	printf("\nName of student is: %s",s1.sname);
	
	
}
