//  Program to concatenate two strings 
//  with strcat() and without strcat()
#include <stdio.h>
#include<string.h>
int main()
{   
   // method-1
    char s1[30]= "jenny";
    char s2[10]= "khatri";
    printf("First string: %s\n",s1);
    printf("Second string: %s\n",s2);
    strcat(s1,s2);
    printf("Concatenated string: %s\n",s1);

    char s1[6]= "jenny";
    char s2[7]= "khatri";
    printf("First string: %s\n",s1);
    printf("Second string: %s\n",s2);
    strcat(s1,s2);
    // Gives you an error and not buffer overflow
    printf("Concatenated string: %s\n",s1);

    char s1[30]= "jenny";
    char s2[10]= "khatri";
    printf("First string: %s\n",s1);
    printf("Second string: %s\n",s2);
    strncat(s1,s2,4);
    printf("Concatenated string: %s\n",s1);

  
    char s1[30]= "jenny";
    char s2[10]= "khatri";
    int l1,l2,l3;
    printf("First string: %s\n",s1);
    printf("Second string: %s\n",s2);
    l1=strlen(s1);
    l2=strlen(s2);
    strcat(s1,s2);
    printf("Concatenated string: %s\n",s1);
    l3=strlen(s1);
    printf("String length is: %d\n",l1);
    printf("String length is: %d\n",l2);
    printf("String length is: %d\n",l3);

   // method-2
    char s1[30]= "jenny";
    char s2[10]= "khatri";
    int l1,l2,i;
    printf("First string: %s\n",s1);
    printf("Second string: %s\n",s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<=l2;i++)
    {
        s1[l1+i]=s2[i];
    }
    printf("Concatenated string: %s\n",s1);


    char s1[30];
    char s2[10];
    int len,l1,l2,l3,i;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    printf("First string: %s\n",s1);
    printf("Second string: %s\n",s2);
    l1=strlen(s1);
    l2=strlen(s2);
    len=l1;
    // concatenation
    for(i=0;i<=l2;i++)
    {
        // s1[l1+i]=s2[i];
        s1[l1]=s2[i];
        l1++;  
    }
    printf("Concatenated string: %s\n",s1);
    l3=strlen(s1);
    // length
    printf("String length is: %d\n",len);
    printf("String length is: %d\n",l2);
    printf("String length is: %d\n",l3);
 
    
    
    char s1[30];
    char s2[10];
    int l1,l2,l3,i;
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    printf("First string: %s\n",s1);
    printf("Second string: %s\n",s2);
    l1=strlen(s1);
    l2=strnlen(s2,2);
    // concatenation
    for(i=0;i<l2;i++)
    {
        s1[l1+i]=s2[i];
        
    }
    printf("Concatenated string: %s\n",s1);
    l3=strlen(s1);
    // length
    printf("String length is: %d\n",l1);
    printf("String length is: %d\n",l2);
    printf("String length is: %d\n",l3);
   // Input - suraj , dalvi
   // Output - Surajda


    return 0;
}