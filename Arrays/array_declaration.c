#include <stdio.h>
#define N 10
int main()
{
    // int a[-5];  //Error
    int a[5];   
    int b[2+2];
    int c[3*2];
    int d[11/2];
    int e;
    int array[e=11/2];
    // int f[];   // Error
    int arr1[0]; // Error - bus error
    int n;
    int arr[n];  // Error - segmentation fault error
    int data[N];
    printf("Hello Array\n");
    printf("size of a is: %lu\n",sizeof(a));
    printf("size of b is: %lu\n",sizeof(b));
    printf("size of c is: %lu\n",sizeof(c));
    printf("size of d is: %lu\n",sizeof(d));
    printf("size of array is: %lu\n",sizeof(array));
    printf("size of arr1 is: %lu\n",sizeof(arr1));
    printf("size of arr is: %lu\n",sizeof(arr));
    printf("size of data is: %lu\n",sizeof(data));
    return 0;
}