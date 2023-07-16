#include <stdio.h>

int main() {
    int N, i;

    printf("Enter the limit (N): ");
    scanf("%d", &N);

    printf("Cubes of natural numbers up to %d:\n", N);

    for (i = 1; i <= N; i++) {
        printf("Number: %d, Cube: %d\n", i, i * i * i);
    }

    return 0;
}