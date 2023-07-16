#include <stdio.h>

int main()
 {
    unsigned long long term = 2;
    int i, n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");

    for (i = 0; i < n; i++) {
        printf("%llu ", term);
        term = term * term;
    }

    printf("\n");

    return 0;
}




