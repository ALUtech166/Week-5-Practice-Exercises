/**
 * C program to input and print array elements using pointers
 */

#include <stdio.h>

#define MAX_SIZE 1000 

void main()
{
    int arr[MAX_SIZE];
    int n, i;
    int * Arrptr = arr;

    printf("Input the  size of array: \n");
    scanf("%d", &n);

    printf("Input elements in array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", Arrptr);
        Arrptr++;   
    }

   
    Arrptr = arr;

    printf("Here is the Array elements you store: \n");
    for (i = 0; i < n; i++)
    {
    
        printf("%d, ", *Arrptr);
        Arrptr++;
    }

}