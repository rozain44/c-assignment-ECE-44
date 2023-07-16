#include <stdio.h>

void calculatePercentageAndGrade(int marks[]) {
    int totalMarks = 500;
    int obtainedMarks = 0;

    for (int i = 0; i < 5; i++) {
        obtainedMarks += marks[i];
    }

    float percentage = (obtainedMarks / (float)totalMarks) * 100;

    printf("Total Marks Obtained: %d\n", obtainedMarks);
    printf("Percentage: %.2f%%\n", percentage);

    if (percentage >= 90) {
        printf("Grade: A\n");
    } else if (percentage >= 80) {
        printf("Grade: B\n");
    } else if (percentage >= 70) {
        printf("Grade: C\n");
    } else if (percentage >= 60) {
        printf("Grade: D\n");
    } else if (percentage >= 50) {
        printf("Grade: E\n");
    } else {
        printf("Grade: F (Fail)\n");
    }
}

int main() {
    int marks[5];

    printf("Enter marks in five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    calculatePercentageAndGrade(marks);

    return 0;
}
