// Read the marks of 5 students and calculate sum and avg
#include <stdio.h>
int main()
{ 
     int marks[5],i;
     float sum=0,avg;
     printf("Enter the marks of 5 students:\n");
     for(i=0;i<5;i++)
     {
        scanf("%d",&marks[i]);
     }
     printf("Entered marks of 5 students are:\n");
     for(i=0;i<5;i++)
     {
        printf("%d ",marks[i]);
        sum = sum + marks[i];
     }
     avg = sum/5;
     printf("\nSum is: %.1f\n",sum);
     printf("Average is: %.1f\n",avg);
    return 0;
}