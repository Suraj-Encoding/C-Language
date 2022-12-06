// Read 2 arrays and store sum of these 2 arrays into 3rd array
#include <stdio.h>
int main()
{   
    int i,arr[5],arr1[5],arr2[5];
    printf("Enter 1st array:\n");
     for(i=0;i<5;i++)
       scanf("%d",&arr1[i]);
    printf("Enter 2nd array:\n");
     for(i=0;i<5;i++)
       scanf("%d",&arr2[i]);
   // 3rd array: arr[5] = arr1[5] + arr2[5]
     for(i=0;i<5;i++)
         arr[i]=arr1[i]+arr2[i];
    printf("The 3rd array is:\n");
     for(i=0;i<5;i++)
       printf("%d ",arr[i]);
    printf("\n");
    return 0;
}