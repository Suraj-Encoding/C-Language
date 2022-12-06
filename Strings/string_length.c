// Program to find length of a string
#include <stdio.h>
#include<string.h>
int main()
{ 
    // method-1
    int count=0;
    char name[30];
    printf("Enter name: ");
    // fgets(name,30,stdin); // problem
    gets(name);
    printf("%s",name);
    count=strlen(name);
    printf("length of the string is: %d\n",count);


   // method-2:
    int count=0,i;
    char name[30];
    printf("Enter name: ");
    gets(name);
    printf("Name is: %s\n",name);
    for(i=0;i<30;i++)
    {
        if(name[i]=='\0')
            break;
        else
           count++;
    }
    printf("length of the string is: %d\n",count);

    // method-3:
    int count=0,i;
    char name[30];
    printf("Enter name: ");
    gets(name);
    printf("Name is: %s\n",name);
    for(i=0;i<30;i++)
      {
        if(name[i]=='\0')
        {
          count=i;
          break;
        }
        else
          continue;
      }
    printf("length of the string is: %d\n",count);


    // method-4:
    int count=0,i=0;
    char name[30];
    printf("Enter name: ");
    gets(name);
    printf("Name is: %s\n",name);
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    printf("length of the string is: %d\n",count);

    return 0;
}