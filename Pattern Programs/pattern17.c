// pattern 17 -> Half pyramid of alphabets (case-2)
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Alphabet pattern 4: \n");
    for(i=1;i<=n;i++)
    {    
        for(j=1;j<=i;j++)
        {  
            printf("%c ",64+i); // Best solution
        }
        printf("\n");
    }
    return 0;
}