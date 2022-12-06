// Program to Reverse a String 
//  with strrev() and without strrev() 
#include <stdio.h>
#include<string.h>
int main()
{ 
    char s1[30];
    char rev;
    int l,i,j;
    printf("Enter string: ");
    gets(s1);
    printf("string: %s\n",s1);
    // strrev(s1); // This will not work in new gcc compiler
    l=strlen(s1);
    for(i=0;i<l/2;i++)
    {
        rev=s1[i];
        s1[i]=s1[l-1-i];
        s1[l-1-i]=rev;
    }
 /* for(i=0,j=l-1;i<l/2 && j>=0;i++,j--)
    {
        rev=s1[i];
        s1[i]=s1[j];
        s1[j]=rev;
    }   */
    // cond -> i<j or i!=j
    printf("reverse string: %s\n",s1);
    return 0;
}
