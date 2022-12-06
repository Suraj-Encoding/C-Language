#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int size;
    // address of array
    printf("Address of array a is: %d\n", a);
    printf("Address of array a is: %d\n", &a);
    printf("Address of array a is: %d\n", &a[0]);
    printf("Address of array a is: %d\n", &a[1]);
    printf("Address of array a is: %d\n", &a[2]);
    printf("Address of array a is: %d\n", &a[3]);
    printf("Address of array a is: %d\n", &a[4]);
    // size of array
    size = sizeof(a) / sizeof(int);
    printf("size of array a is: %d\n", size);
    return 0;
}