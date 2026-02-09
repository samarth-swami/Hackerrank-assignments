#include <stdio.h>

int main() {
    int hardness, tensileStrength;
    float carbonContent;

    // Read input values
    scanf("%d %f %d", &hardness, &carbonContent, &tensileStrength);

    // Check grading conditions
    if (hardness > 50 && carbonContent < 0.7 && tensileStrength > 5600) {
        printf("The grade of the steel is: 10\nAll of the conditions met.");
    } 
    else if (hardness > 50 && carbonContent < 0.7) {
        printf("The grade of the steel is: 9\nTwo conditions met.");
    } 
    else if (hardness > 50 && tensileStrength > 5600) {
        printf("The grade of the steel is: 7\nTwo conditions met.");
    } 
    else if (carbonContent < 0.7 && tensileStrength > 5600) {
        printf("The grade of the steel is: 8\nTwo conditions met.");
    } 
    else if (hardness > 50 || carbonContent < 0.7 || tensileStrength > 5600) {
        printf("The grade of the steel is: 6\nOnly one condition met.");
    } 
    else {
        printf("The grade of the steel is: 5\nNone of the conditions met.");
    }

    return 0;
}
