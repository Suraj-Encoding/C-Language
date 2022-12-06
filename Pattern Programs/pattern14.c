// pattern 14 -> Half pyramid of alphabets
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    // char c;
    printf("Alphabet pattern 1: \n");
    for(i=1;i<=n;i++)
    {    
        // c='A';
        for(j=1;j<=i;j++)
        {  
            // printf("%c ",c);
            printf("%c ",64+j); // Best solution
            // c++;
        }
        printf("\n");
    }
    return 0;
}