// WAP program to print a Matrix and calculate Sum 
#include <stdio.h>
int main()
{   
    int a[2][3],i,j,sum=0;
    printf("Enter the matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    // display the 2d array in matrix form 
    printf("Display the matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("The sum of all the elements of matrix: %d\n",sum);
    return 0;
}