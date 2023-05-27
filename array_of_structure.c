#include <stdio.h>  

struct student {    
    int rollno;    
    char name[10];    
    float marks[3];   
};    

int main() {    
    int i, j;    
    struct student st[3];    
    printf("Enter Records of 3 students\n");    
    for(i = 0; i < 3; i++) {    
        printf("\nEnter Rollno:");    
        scanf("%d", &st[i].rollno);    
        printf("Enter Name:");    
        scanf("%s", &st[i].name);    
        printf("Enter marks of 3 subjects:\n");
        for(j = 0; j < 3; j++) {
            scanf("%f", &st[i].marks[j]); 
        }
    }    
    printf("\nStudent Information List:\n");    
    for(i = 0; i < 3; i++) {    
        printf("Rollno:%d, Name:%s, Marks: ", st[i].rollno, st[i].name);    
        float total_marks = 0;
        for(j = 0; j < 3; j++) {
            printf("%.2f ", st[i].marks[j]); 
            total_marks += st[i].marks[j];
        }
        float percentage = total_marks / 3.0; 
        printf(", Percentage: %.2f\n", percentage);
    }    
    return 0;    
}
