#include <stdio.h>

int main() {
    float number;
    int roundedValue;

    // Read the floating-point number
    scanf("%f", &number);

    // Remove decimal part by type casting
    roundedValue = (int) number;

    // Print the result in the required format
    printf("Rounded Value = %d", roundedValue);

    return 0;
}
