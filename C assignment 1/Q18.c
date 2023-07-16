#include <stdio.h>

void printPatternA(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printPatternB(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void printPatternC(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i * 2; j++) {
            printf("%d", j % 2);
        }
        printf("\n");
    }
}

void printPatternD(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void printPatternE(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                printf("%d ", i);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

void printPatternF(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i * 2; j++) {
            if (j <= i)
                printf("%d", j);
            else
                printf("%d", i * 2 - j + 1);
        }
        printf("\n");
    }
}

void printPatternG(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i * 2; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void printPatternH(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i * 2; j++) {
            if (j % 2 == 0)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\nPattern (a):\n");
    printPatternA(rows);

    printf("\nPattern (b):\n");
    printPatternB(rows);

    printf("\nPattern (c):\n");
    printPatternC(rows);

    printf("\nPattern (d):\n");
    printPatternD(rows);

    printf("\nPattern (e):\n");
    printPatternE(rows);

    printf("\nPattern (f):\n");
    printPatternF(rows);

    printf("\nPattern (g):\n");
    printPatternG(rows);

    printf("\nPattern (h):\n");
    printPatternH(rows);

    return 0;
}