#include <stdio.h>

int main() {
    int year;

    // Read input year
    scanf("%d", &year);

    // Check for invalid year
    if (year <= 0) {
        printf("The given year %d is Invalid year.", year);
        return 0;
    }

    // Leap year conditions
    if ((year % 400 == 0) || 
        (year % 4 == 0 && year % 100 != 0)) {
        printf("Yes, %d is a leap year.", year);
    } else {
        printf("No, %d is not a leap year.", year);
    }

    return 0;
}
