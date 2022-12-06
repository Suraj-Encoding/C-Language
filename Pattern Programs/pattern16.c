// pattern 16 -> Inverted half pyramid of alphabets (case-2)
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Alphabet pattern 3: \n");
    for(i=n;i>=1;i--)
    {    
        for(j=1;j<=i;j++)
        {  
            printf("%c ",64+i); // Best solution
        }
        printf("\n");
    }
    return 0;
}