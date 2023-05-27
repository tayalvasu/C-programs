#include<stdio.h> 
#include<string.h>
  
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun}; 
union employee    
	{   int id;    
	    char name[50];    
	}e1;  
  
int main() 
{ 
    enum week day; 
    day = Wed; 
    printf("%d",day); 
    //e1.id=101;  
	   strcpy(e1.name, "Sonoo Jaiswal");
	   printf( "\nemployee 1 id : %d\n", e1.id);  
	   printf( "employee 1 name : %s\n", e1.name); 
    return 0; 
}  