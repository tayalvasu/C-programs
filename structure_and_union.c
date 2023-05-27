#include <stdio.h>  
#include <string.h>  

struct Employee {  
    int id;    
    char name[50];    
} employee1; // declaring employee1 variable for struct  

union EmployeeUnion {  
    int id;    
    char name[50];    
} employee2; // declaring employee2 variable for union      

int main() {  
    // store first employee information using union
    employee2.id = 101;  
    strcpy(employee2.name, "Sonoo Jaiswal"); // copying string into char array  
    // printing first employee information using union  
    printf("Employee 1 (union) ID: %d\n", employee2.id);  
    printf("Employee 1 (union) name: %s\n", employee2.name);  

    // store second employee information using struct  
    employee1.id = 102;    
    strcpy(employee1.name, "John Doe"); // copying string into char array    
    // printing second employee information using struct  
    printf("Employee 2 (struct) ID: %d\n", employee1.id);    
    printf("Employee 2 (struct) name: %s\n", employee1.name);

    return 0;  
} 
