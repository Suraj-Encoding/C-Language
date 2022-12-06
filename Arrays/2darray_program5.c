// Program to multiply 2 matrix
#include <stdio.h>
#define N 10
int main()
{ 
    int a[N][N],b[N][N],c[N][N],i,j,k,m,n,p,q,sum;
    printf("Enter rows and columns for first matrix:\n");
    scanf("%d %d",&m,&n);
    printf("Enter first matrix: \n");
    for(i=0;i<m;i++)
    {   
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter rows and columns for second matrix:\n");
    scanf("%d %d",&p,&q);
    if(n!=p)
     {
         printf("We can't multiply! Enter the correct order\n");
     }
    else
    {
    printf("Enter second matrix: \n");
    for(i=0;i<p;i++)
    {   
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("First matrix is: \n");
    for(i=0;i<m;i++)
    {   
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
      printf("\n");
    }
    printf("Second matrix is: \n");
    for(i=0;i<p;i++)
    {   
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
      printf("\n");
    }

     for(i=0;i<m;i++)
     {   
        for(j=0;j<q;j++)
        {   
             sum=0;
           for(k=0;k<n;k++)
           {
             sum=sum+(a[i][k]*b[k][j]); 
           } 
           c[i][j]=sum; 
        }
     }
    printf("Resultant matrix is: \n");
    for(i=0;i<m;i++)
    {   
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
      printf("\n");
    }
    }
    return 0;
}