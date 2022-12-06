// pattern 10 -> Full pyramid of stars
#include <stdio.h>
int main()
{ 
    int i,j,n,space;
    // int k=0;
    printf("Enter rows: ");
    scanf("%d",&n);  
    printf("Star pattern 6: \n");
     for(i=1;i<=n;i++)
    {   
        for(space=1;space<=(n-i);space++)
        {
            printf(" ");
        }
        // for(j=1;j<=(i+k);j++)
        for(j=1;j<=(2*i-1);j++)   // Best approach
        { 
            printf("*");  
        }
        // k++;
        printf("\n");
    }
    return 0;

}