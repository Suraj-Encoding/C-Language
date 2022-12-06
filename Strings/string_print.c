#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    scanf("%s",name);
   // Input- Jayanti
    printf("%s\n",name);  // Jayanti
    printf("%.5s",name); // Jayan
    printf("%10.5s",name); // _ _ _ _ _ Jayan
    puts(name); // Jayanti 
    puts(name); // add \n at the end
    printf("%s\n",&name); // Jayanti (Error)
    printf("%s\n",&name[2]); // yanti
    printf("%s\n",name[2]); // Error
    return 0;
}