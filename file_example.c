#include<stdio.h>
void main()
{
    FILE*fp;
    int id;
    char name[30];
    float salary;
    fp =fopen("hello.txt","w+");
    if (fp == NULL)
    {
        printf("File doesnt exist");
        return;
    }
    printf("Enter the id\n");
    scanf("%d",&id);
    fprintf(fp,"ID %d\n",id);
    printf("Enter the name\n");
    scanf("%s",&name);
    fprintf(fp, "NAME %s\n",name);
    printf("Enter the salary\n");
    scanf("%f",&salary);
    fprintf(fp,"SALARY=%.2f\n",salary);


    fclose(fp);    
}
