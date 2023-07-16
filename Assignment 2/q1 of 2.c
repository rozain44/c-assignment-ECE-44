#include <stdio.h>

void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("The number %d is even.\n", number);
    } else {
        printf("The number %d is odd.\n", number);
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    checkEvenOdd(number);
    return 0;
}
