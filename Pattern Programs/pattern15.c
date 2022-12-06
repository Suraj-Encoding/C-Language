// pattern 15 -> Inverted half pyramid of alphabets
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Alphabet pattern 2: \n");
    for(i=n;i>=1;i--)
    {    
        for(j=1;j<=i;j++)
        {  
            printf("%c ",64+j); // Best solution
        }
        printf("\n");
    }
    return 0;
}