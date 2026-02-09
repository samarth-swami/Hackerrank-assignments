#include <stdio.h>

int main() {
    double income;
    double tax = 0.0;

    // Read annual income
    scanf("%lf", &income);

    // Check for invalid income
    if (income < 0) {
        printf("INVALID");
        return 0;
    }

    // Calculate tax based on slabs
    if (income <= 250000) {
        tax = 0.0;
    } 
    else if (income <= 500000) {
        tax = 0.05 * (income - 250000);
    } 
    else if (income <= 1000000) {
        tax = (0.05 * 250000) +
              (0.20 * (income - 500000));
    } 
    else {
        tax = (0.05 * 250000) +
              (0.20 * 500000) +
              (0.30 * (income - 1000000));
    }

    // Print tax with two decimal places
    printf("%.2lf", tax);

    return 0;
}
