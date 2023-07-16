#include <stdio.h>

int sumDigits(int number) {
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    return sum;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int sum = sumDigits(number);
    printf("Sum of the digits: %d\n", sum);

    return 0;
}
