// Program to convert a String from Upper Case to Lower Case 
// with strlwr() and without strlwr()
#include <stdio.h>
#include<string.h>
int main()
{
    // method-1
    char s1[30];
    printf("Enter string: ");
    gets(s1);
    printf("string: %s\n",s1);
    strlwr(s1);  // Error
    // strupr(s1);
    printf("modified string: %s\n",s1);
    // strlwr(),strupr(),strrev(),strstr() 
    // are non standard funtion which are compiler dependent
    
    // method-2 -> (upr->lwr)
    char s1[30];
    int i;
    printf("Enter string: ");
    gets(s1);
    printf("String: %s\n",s1);
    // for(i=0;i<strlen(s1);i++)   // i<l-> l=strlen(s1)
    for(i=0;s1[i]!='\0';i++)
    {   
        // if(s1[i]>='A' && s1[i]<='Z')
        if(s1[i]>=65 && s1[i]<=90)
        {
           s1[i]=s1[i]+32;
        }
    }
    printf("Modified string: %s\n",s1);


    // method-2 -> (lwr->upr)
    char s1[30];
    int i;
    printf("Enter string: ");
    gets(s1);
    printf("String: %s\n",s1);
    for(i=0;i<strlen(s1);i++)
    {   
        // if(s1[i]>=97 && s1[i]<=122)
        if(s1[i]>='a' && s1[i]<='z')
        {
           s1[i]=s1[i]-32;
        }
    }
    printf("Modified string: %s\n",s1);
    return 0;
}