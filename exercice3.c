// C progam
#include <stdio.h>

long add(long *, long *);

int main() {
    long first, second, sum;

    printf("Input the two numbers: \n");
    scanf("%ld%ld", &first, &second);

    sum = add(&first, &second);
    printf("The sum of %ld and %ld is : %ld\n\n", first, second, sum);
    return 0;

}

long add(long *x, long *y) {
    long sum;
    sum = *x + *y;
    return sum;
}