#include <stdio.h>

int main()
 {
    int n, i;
    long long product = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        product *= i;
    }

    printf("Product of the series from 1 to %d: %lld\n", n, product);

    return 0;
}