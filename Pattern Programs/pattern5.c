// pattern 5 -> Inverted half pyramid of numbers (case-2)
#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Number pattern 3: \n");
    for(i=1;i<=n;i++)
    {
       // updated j loop
        for(j=n;j>=i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}