#include <stdio.h>

float calculateTax(float income) {
    float tax = 0.0;

    if (income < 150000) {
        tax = 0.0;
    } else if (income >= 150001 && income <= 300000) {
        tax = income * 0.1;
    } else if (income >= 300001 && income <= 500000) {
        tax = income * 0.2;
    } else if (income > 500000) {
        tax = income * 0.3;
    }

    return tax;
}

int main() {
    float income;
    printf("Enter the income: ");
    scanf("%f", &income);

    float tax = calculateTax(income);

    printf("Tax to be paid: %.2f\n", tax);

    return 0;
}
