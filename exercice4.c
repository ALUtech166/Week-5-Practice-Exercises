#include <stdio.h>
#include <stdlib.h>



int main() {
    int x, y,*xptr=&x,*yptr=&y;
    
    printf("Enter the two numbers x and y: \n");
    scanf("%d%d", &x, &y);



    if (*xptr>*yptr) 
    {
        /* code */
        printf("\n\n The maximum number is : %d\n", *xptr);
    }
    else 
    {
        printf("\n\nThe maximum number is : %d\n", *yptr);
    }

    return 0;
   

}
