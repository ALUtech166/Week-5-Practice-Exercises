// C code 

#include <stdio.h>


int main() {
    int n[10], i;
    int smallest, greatest;
    int clrscr();

    for (i = 0; i < 10; i++)
    {
        /* code */
        printf("Enter an Integer: \n");
        scanf("%d", &n[i]);
        
    }
    greatest=smallest=n[0];

    for (i = 1; i < 10; i++)
    {
        /* code */
        if (greatest<n[i]) {
            greatest=n[i];
        }
        if (smallest>n[i])
        {
            /* code */
            smallest=n[i];
        }
        
    }
    printf("\n The greatest number is %d\n", greatest);
    printf("\n The smallest number is %d\n", smallest);
    getchar();
     
    return 0;
    
}