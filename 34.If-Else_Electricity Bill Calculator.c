#include <stdio.h>

int main() {
    float units;
    float billAmount = 0.0;
    float extraUnits;

    // Read number of units
    scanf("%f", &units);

    // Validate input
    if (units < 0) {
        printf("Invalid Input!");
        return 0;
    }

    // Calculate bill based on slabs
    if (units <= 100) {
        billAmount = units * 5;
    } 
    else if (units <= 300) {
        extraUnits = units - 100;
        billAmount = (100 * 5) + (extraUnits * 7);
    } 
    else {
        extraUnits = units - 300;
        billAmount = (100 * 5) + (200 * 7) + (extraUnits * 10);
    }

    // Apply 10% discount if bill is less than or equal to 1200
    if (billAmount <= 1200) {
        billAmount = billAmount - (billAmount * 0.10);
    }

    // Print final bill
    printf("The electricity bill is: %.2f.", billAmount);

    return 0;
}
