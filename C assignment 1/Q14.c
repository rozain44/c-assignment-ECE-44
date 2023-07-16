#include <stdio.h>

int main() {
    int term = 2;
    int i, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");

    for (i = 0; i < n; i++) {
        printf("%d ", term);
        term = term * 2;
    }

    printf("\n");

    return 0;
}




