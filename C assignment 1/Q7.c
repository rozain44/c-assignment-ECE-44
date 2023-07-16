#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d odd natural numbers are:\n", n);

    for (i = 1; i <= n; i++) {
        int oddNumber = 2 * i - 1;
        printf("%d ", oddNumber);
        sum += oddNumber;
    }

    printf("\nSum of the first %d odd natural numbers: %d\n", n, sum);

    return 0;
}




