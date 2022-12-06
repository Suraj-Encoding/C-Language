// Program to Compare two Strings 
// with strcmp() and without strcmp()
#include <stdio.h>
#include <string.h>
int main()
{   
    // method-1
    int value;
    char s1[10]="computer";
    char s2[10]="Computer";
    value=strcmp(s1,s2);
    // if(strcmp(s1,s2)==0) 
    if(value==0)   
      printf("strings are equal\n");
    else
      printf("strings are not equal\n");
    printf("value is: %d\n",value);
    // printf("value is: %d\n",strcmp(s1,s2)); 

    int value;
    char s1[10]="computer";
    char s2[10]="comPuter";
    value=strncmp(s1,s2,3); // compare 3 char only
    if(value==0)   
      printf("strings are equal\n");
    else
      printf("strings are not equal\n");
    printf("value is: %d\n",value);

    // method-2
    char s1[30],s2[30];
    int flag=0,i;
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
    }
   if(flag==0)
     printf("same\n");
   else  
     printf("not same\n");
    return 0;
}