#include <stdio.h>

int main() {
    int angle;

    // Read input angle
    scanf("%d", &angle);

    // Normalize the angle within 0–359
    angle = angle % 360;

    // Classify the angle
    if (angle == 0) {
        printf("Full Rotation");
    }
    else if (angle > 0 && angle < 90) {
        printf("Acute Angle");
    }
    else if (angle == 90) {
        printf("Right Angle");
    }
    else if (angle > 90 && angle < 180) {
        printf("Obtuse Angle");
    }
    else if (angle == 180) {
        printf("Straight Angle");
    }
    else {
        printf("Reflex Angle");
    }

    return 0;
}
