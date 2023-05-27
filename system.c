#include<stdio.h>
#include<string.h>

struct address
{
    int hn;
    char col[20];
    char city[20];
    long int pin;
};

struct student
{
    int roll;
    long long  phone_number;
    char name[20];
    char fname[20];
    char gender;
    struct address A;
    int marks;
    float per;
};

int main()
{
    struct student BCA[200], BCA_R[200];
    int i, n, j, t1, choice;
    char t2[50];

    FILE* fp;

    printf("Enter the number of students: ");
    scanf("%d", &n);

   for (i = 0; i < n; i++)
    {
        printf("Enter student details for student %d:\n", i + 1);

        printf("Enter roll no: ");
        scanf("%d", &BCA[i].roll);

        printf("Enter name: ");
        fflush(stdin);
        gets(BCA[i].name);

        printf("Enter phone number");
        fflush(stdin);
        scanf("%lld",&BCA[i].phone_number);

        printf("Enter father's name: ");
        fflush(stdin);
        gets(BCA[i].fname);

        printf("Enter gender: ");
        fflush(stdin);
        scanf("%c", &BCA[i].gender);

        printf("Enter house no: ");
        fflush(stdin);
        scanf("%d", &BCA[i].A.hn);

        printf("Enter colony name: ");
        fflush(stdin);
        gets(BCA[i].A.col);

        printf("Enter student city: ");
        fflush(stdin);
        gets(BCA[i].A.city);

        printf("Enter the city pin code: ");
        scanf("%ld", &BCA[i].A.pin);

        printf("Enter marks: ");
        scanf("%d", &BCA[i].marks);
    }
    fp = fopen("record.txt", "wb+");
    //fp = fopen("record.txt", "rb");
    fwrite(BCA, sizeof(struct student), n, fp);
    rewind(fp);
    fread(BCA_R, sizeof(struct student), n, fp);
    printf("Roll number\tName\t Phone number\t\tCity\t\tMarks\tGender\t\tColony\t\tCity\t\tPincode\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t%lld\t\t%s\t\t%d\t%c\t\t%s\t\t%s\t\t%ld\n", BCA_R[i].roll, BCA_R[i].name,BCA_R[i].phone_number,BCA_R[i].A.city, BCA_R[i].marks, BCA_R[i].gender, BCA_R[i].A.col, BCA_R[i].A.city, BCA_R[i].A.pin);
    }
   

    printf("1.   Enter 1 for finding topper\n");
    printf("2.  Enter 2 for average student list between 50-60%\n");
    printf("3.  Enter 3 for particular student list\n");
    printf("4.  Enter 4 for count boys and girls\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:

            for (i = 0; i < n; i++)
{
    for (j = i + 1; j < n; j++)
    {
        if (BCA_R[i].marks < BCA_R[j].marks)
        {
            
            int t1 = BCA_R[i].roll;
            BCA_R[i].roll = BCA_R[j].roll;
            BCA_R[j].roll = t1;
            
           
            strcpy(t2, BCA_R[i].name);
            strcpy(BCA_R[i].name, BCA_R[j].name);
            strcpy(BCA_R[j].name, t2);

            
            long long t3 = BCA_R[i].phone_number;
            BCA_R[i].phone_number = BCA_R[j].phone_number;
            BCA_R[j].phone_number = t3;

          
            strcpy(t2, BCA_R[i].fname);
            strcpy(BCA_R[i].fname, BCA_R[j].fname);
            strcpy(BCA_R[j].fname, t2);

            
            char t4 = BCA_R[i].gender;
            BCA_R[i].gender = BCA_R[j].gender;
            BCA_R[j].gender = t4;

            
            int t5 = BCA_R[i].A.hn;
            BCA_R[i].A.hn = BCA_R[j].A.hn;
            BCA_R[j].A.hn = t5;

           
            strcpy(t2, BCA_R[i].A.col);
            strcpy(BCA_R[i].A.col, BCA_R[j].A.col);
            strcpy(BCA_R[j].A.col, t2);

           
            strcpy(t2, BCA_R[i].A.city);
            strcpy(BCA_R[i].A.city, BCA_R[j].A.city);
            strcpy(BCA_R[j].A.city, t2);


            long int t6 = BCA_R[i].A.pin;
            BCA_R[i].A.pin = BCA_R[j].A.pin;
            BCA_R[j].A.pin = t6;


            int t7 = BCA_R[i].marks;
            BCA_R[i].marks = BCA_R[j].marks;
            BCA_R[j].marks = t7;
        }
    }
}    
            printf("Topper:\n");
            printf("Roll number: %d\n", BCA_R[0].roll);
            printf("Name: %s\n", BCA_R[0].name);
            printf("Gender:%c\n",BCA_R[0].gender);
            printf("Fthers Name:%s\n",BCA_R[0].fname);
            printf("House no:%d\n",BCA_R[0].A.hn);
            printf("pin code:%ld\n",BCA_R[0].A.pin);
            printf("Calony name:%s\n",BCA_R->A.col);
            printf("phone number: %lld\n",BCA_R[0].phone_number);
            printf("City: %s\n", BCA_R[0].A.city);
            printf("Marks:%d\n",BCA_R[0].marks);

            break;

        case 2:
    printf("List of students with marks between 50-60%%:\n");
    printf("Roll number\tName\tPhone number\t\tCity\t\tMarks\tGender\t\tColony\t\tPincode\n");
    for (i = 0; i < n; i++) {
        if (BCA_R[i].per >= 50 && BCA_R[i].per <= 60) {
            printf("%d\t\t%s\t%lld\t\t%s\t\t%d\t%c\t\t%s\t\t%ld\n", 
                   BCA_R[i].roll, BCA_R[i].name, BCA_R[i].phone_number, 
                   BCA_R[i].A.city, BCA_R[i].marks, BCA_R[i].gender, 
                   BCA_R[i].A.col, BCA_R[i].A.pin);
        }
    }
    break;

case 3 :
char city[10];
printf("Enter the city of the student: ");
scanf("%s", city);
for (i = 0; i < n; i++) {
    if (strcmp(BCA_R[i].A.city, city) == 0) {
        printf("Roll number: %d\n", BCA_R[i].roll);
        printf("Name: %s\n", BCA_R[i].name);
        printf("phone number: %lld\n", BCA_R[i].phone_number);
        printf("Father's name: %s\n", BCA_R[i].fname);
        printf("Gender: %c\n", BCA_R[i].gender);
        printf("Address: %d, %s, %s - %ld\n", BCA_R[i].A.hn, BCA_R[i].A.col, BCA_R[i].A.city, BCA_R[i].A.pin);
        printf("Marks: %d\n", BCA_R[i].marks);
        
    }
}

break;
case 4:
    int num_boys = 0, num_girls = 0;
    for (i = 0; i < n; i++) {
        if (BCA_R[i].gender == 'm') {
            num_boys++;
        } else if (BCA_R[i].gender == 'f') {
            num_girls++;
        }
    }
    printf("Number of boys: %d\n", num_boys);
    printf("Number of girls: %d\n", num_girls);
    break;
    }
     
    return 0;
}