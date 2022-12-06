// Program to print the transpose of a matrix
#include <stdio.h>
int main()
{   
    int a[2][3],i,j;
    printf("Enter the matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        
        }
    }
    printf("Display the matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Display the transpose of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",a[j][i]);
        }   
       printf("\n");
    }
    return 0;
}

/* Method-2:
#include <stdio.h>
int main()
{   
    int a[2][3],b[3][2],i,j;
    printf("Enter the matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Display the matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Display the transpose of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
           b[i][j]=a[j][i];
        }   
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}   */