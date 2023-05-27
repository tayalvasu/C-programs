#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int rollno;
    int marks;
    char city[50];
    char address[100];
    char gender[10];
} Student;

void addStudent() {
    FILE *fp = fopen("students.txt", "wb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    Student student;
    for (int i = 0; i < 3; i++) {
        printf("Enter student details for student %d:\n", i+1);
        printf("\nRoll No: \n");
        fflush(stdin);
        scanf("%d", &student.rollno);
        printf("\nName: \n");
        fflush(stdin);
        gets(student.name);
        printf("\nMarks: \n");
        fflush(stdin);
        scanf("%d", &student.marks);
        printf("\nCity: \n");
        fflush(stdin);
        gets(student.city);
        printf("\nAddress: \n");
        fflush(stdin);
        gets(student.address);
        printf("\nGender: \n");
        fflush(stdin);
        gets(student.gender);

        fwrite(&student, sizeof(student), 1, fp);
        printf("Student details added.\n");
    }
    fclose(fp);
}

void highestMarks() {
    FILE *fp = fopen("students.txt", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    Student student;
    int highestMarks = 0;
    while (fread(&student, sizeof(student), 1, fp)) {
        if (student.marks > highestMarks) {
            highestMarks = student.marks;
        }
    }
    fclose(fp);
    printf("The highest marks are: %d\n", highestMarks);
}

void averageCategory() {
    FILE *fp = fopen("students.txt", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    Student student;
    int count = 0;
    int totalMarks = 0;
    while (fread(&student, sizeof(student), 1, fp)) {
        if (student.marks >= 50 && student.marks <= 60) {
            count++;
            totalMarks += student.marks;
        }
    }
    fclose(fp);
    if (count > 0) {
        float average = (float) totalMarks / count;
        printf("The average marks in the 50-60%% range are: %.2f\n", average);
    } else {
        printf("No students found in the 50-60%% range.\n");
    }
}

void cityDetails() {
    char city[50];
    printf("Enter city name: ");
    scanf("%s", city);

    FILE *fp = fopen("students.txt", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }
    Student student;
    int count = 0;
    while (fread(&student, sizeof(student), 1, fp)) {
        if (strcmp(student.city, city) == 0) {
            printf("Name: %s\n", student.name);
            printf("Roll No: %d\n", student.rollno);
            printf("Marks: %d\n", student.marks);
            printf("City: %s\n", student.city);
            printf("Address: %s\n", student.address);
            printf("Gender: %s\n", student.gender);
            printf("\n");
            count++;
        }
    }
    fclose(fp);
    if (count == 0) {
        printf("No students found in %s.\n", city);
    }
}

void countGender() {
    FILE *fp = fopen("students.txt", "rb");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return;
    }

    Student student;
    int boys = 0, girls = 0;

    while (fread(&student, sizeof(student), 1, fp)) {
        if (strcmp(student.gender, "male") == 0) {
            boys++;
        } else if (strcmp(student.gender, "female") == 0) {
            girls++;
        }
    }
    fclose(fp);
    printf("Number of boys: %d\n", boys);
    printf("Number of girls: %d\n", girls);
}

int main() {
    int choice;
    do {
        printf("Enter your choice:\n");
        printf("1. Add student details\n");
        printf("2. Display highest marks\n");
        printf("3. Display average marks in the 50-60%% range\n");
        printf("4. Display details of students in a particular city\n");
        printf("5. Count the number of boys and girls\n");
        printf("6. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                highestMarks();
                break;
            case 3:
                averageCategory();
                break;
            case 4:
                cityDetails();
                break;
            case 5:
                countGender();
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 6);

    return 0;
}
