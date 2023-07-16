#include <stdio.h>

void determineLocation(float x, float y) {
    if (x == 0 && y == 0) {
        printf("(%.1f, %.1f) is at the origin.\n", x, y);
    } else if (x == 0) {
        printf("(%.1f, %.1f) is on the y-axis.\n", x, y);
    } else if (y == 0) {
        printf("(%.1f, %.1f) is on the x-axis.\n", x, y);
    } else if (x > 0 && y > 0) {
        printf("(%.1f, %.1f) is in quadrant I.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("(%.1f, %.1f) is in quadrant II.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("(%.1f, %.1f) is in quadrant III.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("(%.1f, %.1f) is in quadrant IV.\n", x, y);
    }
}

int main() {
    float x, y;
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);

    determineLocation(x, y);

    return 0;
}
