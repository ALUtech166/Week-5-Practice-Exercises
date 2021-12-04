
#include <stdio.h>
#include <string.h>

void swap( char *a, char *b)
{
   
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;

    
}

void permute(char *x, int j, int k)
{
    int i;
    
    
    if (j == k) {
        printf("\n%s\n", x);
    }
    else
    {
        /* code */
          for (i = j; i <= k; i++) {
            swap((x+j), (x+i));
            permute(x, j+1, k);
            swap((x+j), (x+i)); 

        }
    
    }
    
   
}


/* Driver program to test above functions */
int main()
{
    char str[50];
	printf("Input a String: \n\n");
    scanf("%s", str);
	int n = strlen(str);
	permute(str, 0, n-1);
	return 0;
}
