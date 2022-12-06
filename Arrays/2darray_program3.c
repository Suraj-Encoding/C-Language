// Program to print Sum of individual Rows and Columns and diagonal of a Matrix
#include <stdio.h>
int main()
{ 
    int a[3][3],i,j,r,c,d=0;
    printf("Enter the matrix: \n");
    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {    r=c=0;
        for(j=0;j<3;j++)
        {
            r=r+a[i][j];
            c=c+a[j][i];
        }
       d=d+a[i][i];
      printf("sum of row %d is: %d \t sum of column %d is: %d\n",i+1,r,i+1,c);
    }
    printf("sum of diagonal is: %d\n",d);
    return 0;
}