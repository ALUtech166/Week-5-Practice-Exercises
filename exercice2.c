// A program that calculates the factorial

#include <stdio.h>

int main() {
    int n, i;

    unsigned long long fact = 1;
    printf("Enter an Integer: \n");
    scanf("%d", &n);

    // Checking whether the interger is negative or positive

    if (n < 0) {
        printf("Ouff, Error wrong interger.");

    }
    else {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %llu \n", n, fact);
    }

    return 0;
}