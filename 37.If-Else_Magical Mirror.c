#include <stdio.h>

int main() {
    int number;
    int condition1 = 0, condition2 = 0, condition3 = 0;

    // Read input
    scanf("%d", &number);

    // Check for invalid input
    if (number <= 0) {
        printf("The verdict for the number %d is: INVALID", number);
        return 0;
    }

    // Condition 1: Greater than 10 and even
    if (number > 10 && number % 2 == 0) {
        condition1 = 1;
    }

    // Condition 2: Greater than 15 and divisible by 3
    if (number > 15 && number % 3 == 0) {
        condition2 = 1;
    }

    // Condition 3: Divisible by 7
    if (number % 7 == 0) {
        condition3 = 1;
    }

    // Count how many conditions are satisfied
    int satisfiedCount = condition1 + condition2 + condition3;

    // Determine verdict
    if (satisfiedCount == 3) {
        printf("The verdict for the number %d is: SUPERNATURAL", number);
    }
    else if (satisfiedCount == 2) {
        printf("The verdict for the number %d is: MIRACULOUS", number);
    }
    else if (satisfiedCount == 1) {
        printf("The verdict for the number %d is: MAGICAL", number);
    }
    else {
        printf("The verdict for the number %d is: NORMAL", number);
    }

    return 0;
}
