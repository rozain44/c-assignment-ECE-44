#include <stdio.h>

int reverseNumber(int number) {
    int reversedNumber = 0;

    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    return reversedNumber;
}

int isPalindrome(int number) {
    int reversedNumber = reverseNumber(number);
    if (number == reversedNumber) {
        return 1; // Palindrome
    } else {
        return 0; // Not a palindrome
    }
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int reversedNumber = reverseNumber(number);
    printf("Reverse of the number: %d\n", reversedNumber);

    if (isPalindrome(number)) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}	