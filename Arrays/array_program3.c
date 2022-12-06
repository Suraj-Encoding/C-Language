// Count of even and odd integers 
#include <stdio.h>
int main()
{ 
     int a[10],i,even=0,odd=0;
     printf("Enter the 10 integers:\n");
     for(i=0;i<10;i++)
     {
        scanf("%d",&a[i]);
     }
     printf("Entered 10 integers are:\n");
     for(i=0;i<10;i++)
     {
        printf("%d ",a[i]);
        if(a[i]%2==0)
          even++;
        else
          odd++;
     }
     printf("\nCount of even integers is: %d\n",even);
     printf("Count of odd integers is: %d\n",odd);
    return 0;
}