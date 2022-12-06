#include <stdio.h>
int main()
{  
    // Declaration
    char name1[10];
    // Initialization 
    char name[10] = "suraj";
    char name[10]={'s','u','r','a','j','\0'};
    char name[10]={'s','u','r','a','j'};
    char name[]="suraj";
    char name[]={'s','u','r','a','j'};
    char name[]={'s','u','r','a','j','\0'};
    char name[]="we rock"; // space is allowed
    char name[]={'w','e',' ','r','o','c','k'};
    char name[]={'w','e',' ','r','o','c','k','\0'};
    char name[7]={'w','e',' ','r','o','c','k','\0'}; // Error
    char name[8]={'w','e',' ','r','o','c','k'}; // correct
    char name[6]={'w','e',' ','r','o','c','k'}; // Error
    char name[10]={'w','e',' ','r','o','c','k'}; // correct
    char name[10];
    name[10]="suraj"; // Error
    char name[10]="suraj";
    char s1[10];
    //  s1=name;    // Error
    printf("%s\n",name);
    printf("size is: %lu\n",sizeof(name));
    return 0;
   
}