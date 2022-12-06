#include <stdio.h>
int main()
{   
    int a[5]={1,2,3,4,5};
    int a[] ={0,-4,3,6,7,2};
    int a[5] ={0,-4,3};
    int a[5] ={0,-4,3,6,7,9,1,2}; //Error
    int a[5] ={0};
    int a[5] ={};  // Null array  
    int a[5];  // print garbage value
    int a[5];
    a[0]=1, a[1]=2, a[2]=3, a[3]=4, a[4]=5; // not feasible
    printf("Hello array\n");
    return 0;
}