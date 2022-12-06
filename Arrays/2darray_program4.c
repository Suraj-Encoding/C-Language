// Program to add two Matrix 
#include <stdio.h>
int main()
{ 
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter first matrix: \n");
    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter second matrix: \n");
    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("First matrix is:\n");
    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix is:\n");
    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    // Resultant matrix is 
    printf("Resultant matrix is:\n");
    for(i=0;i<3;i++)
    {   
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}