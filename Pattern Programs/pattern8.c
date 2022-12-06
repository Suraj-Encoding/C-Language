// pattern 8 -> Half pyramid of numbers
#include <stdio.h>
int main()
{
    int i,j,k=1,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    printf("Number pattern 5: \n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d ",k);
           k++;
        }
        printf("\n");
    }
    return 0;
}