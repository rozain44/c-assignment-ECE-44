#include <stdio.h>

int main()
 {
    int n, i;
    int first = 1, second = 1, next;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d: %d %d ", n, first, second);

    for (i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}