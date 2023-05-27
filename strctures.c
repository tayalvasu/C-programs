#include<stdio.h>
#include<string.h>
 /*typedef struct student
    {
        char name[100];
        int roll;
        float cgpa;
    }stud;*/
    struct student
    {
      int roll;
      float cgpa;
      char name [100];
    };
    
    int main()
{
        /*struct student s1;
        s1.roll=22612;
        s1.cgpa=8.2;
        strcpy(s1.name, "vasu");
        printf("student name =%s\n",s1.name);
        printf("student roll no =%d\n",s1.roll );
        printf("student cgpa=%f\n",s1.cgpa);
        */

      /* struct student ece[100];
       ece[0].roll =22585;
       ece[0].cgpa=9.0;

       printf("roll =%d\n",ece[0].roll);
       */
      // pointer to structures
      //struct student s1 ={"vasu",22945,9.2};
    //  printf("student roll =%d\n",s1.roll);

     // struct student *ptr =&s1;
       //printf("student roll =%d",ptr->roll);
 /* stud s1;
  printf("Enter the details of student s1: ");  
	printf("\nEnter the name of the student:");  
	scanf("%s",&s1.name);  
	printf("\nEnter the roll no of student:");  
	scanf("%d",&s1.roll);  
	printf("\n Name of the student is : %s", s1.name);  
	printf("\n Age of the student is : %d", s1.roll);*/  

  // pointers to structures
  struct student s1 = {1664,9.2,"vasu"};
  printf("student roll =%d\n",s1.roll);  // printing without pointer

  struct student*ptr =&s1;
  printf("student roll =%d\n",(*ptr).roll); // printing without pointer
  
        return 0;
}
    
