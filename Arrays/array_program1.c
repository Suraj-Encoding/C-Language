// Read and Print an array 
#include <stdio.h>
int main()
{  
    int i,a[5];
    printf("Print before input:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the data:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEntered data is:\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEntered data in reverse order:\n");
    for(i=4;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}