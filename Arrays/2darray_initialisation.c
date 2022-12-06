#include <stdio.h>
int main()
{  
    // at Compile time
    int i,j;
    int a[2][3]={0,0,0,1,1,1};
    int a[2][3]={{0,0,0},{1,1,1}};
    int a[2][3]={
                  {0,0,0},
                  {1,1,1}
                 };
    int a[2][3]={0,0,1,1};
    int a[2][3]={{0,0},{1,1}};
    int a[2][3]={0};
    int a[][3]={0};
    int a[2][3]={1,1,1};
    int a[2][3]={1,1,1,2};
    int a[2][3]={{0,0,0}};
    // int a[2][]={0,0,0,1,1,1}; // Error
    printf("Print the 2d array:\n");
   for(i=0;i<2;i++) // rows
    {
        for(j=0;j<3;j++) // columns
        {
            // printf("%d ",a[i][j]);
        }
    }  printf("\n");
    
   // at run time
     int i,j;
     int a[2][3];
    printf("Enter 2d array:\n");
    for(i=0;i<2;i++) // rows
    {
        for(j=0;j<3;j++) // columns
        {
            scanf("%d",&a[i][j]);
        }
    }  printf("\n");
    return 0;
}