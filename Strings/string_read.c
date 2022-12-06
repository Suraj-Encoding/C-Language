#include <stdio.h>
int main()
{   
    char s1[10];
    printf("Enter string: ");
    scanf("%s",s1);
    scanf("%s",&s1); // Error
    printf("%s\n",s1);
  
   // 1st drawback
    char name[30];
    printf("Enter name: "); 
    scanf("%s",name); 
    printf("%s\n",name);
    // Input- suraj dalvi -> output- suraj
    
   // 1st Solution
    char name[30];
    printf("Enter name: "); 
    gets(name);
    printf("%s\n",name);
    // Input- suraj dalvi -> output- suraj dalvi
 
  //  Buffer overflow
    char name[5];
    printf("Enter name: "); 
    gets(name);
    // Input- suraj dalvi -> output- suraj dalvi -> actual- sura
    scanf("%s",name); 
    // Input- surajdalvi -> output- surajdalvi -> actual- sura
    printf("%s\n",name);

   // Alternative solution   
    char name[5];
    printf("Enter name: "); 
    scanf("%4s",name);
    printf("%s\n",name);
    // Input- suraj -> output- sura
    
  // Best solution is -> use 'fgets' function
    char name[5];
    printf("Enter a string: ");
    // Syntax - fgets(string_name,size,stdin);
    fgets(name,5,stdin); 
    printf("%s\n",name);
    // Input- suraj dalvi -> output- sura
    
    return 0;

}