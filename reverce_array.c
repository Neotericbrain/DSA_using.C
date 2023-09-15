#include <stdio.h>
//2, 3, 4, 5, 6, 67, 234, 234, 1232 given array, Write a c program to print array elements in revers order 

int main()
{
    int a[] = {2, 3, 4, 5, 6, 67, 234, 234, 1232};
    int n;

    for (int i = 0; i <= 8; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    
        printf("This is correct order of array\n");

    for (int i = 8; i >= 0; i--)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    printf("This is revers order of array");
    return 0;
}