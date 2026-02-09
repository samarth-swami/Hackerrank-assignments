#include <stdio.h>

int main() {
    int a, b;

    // Read input
    scanf("%d %d", &a, &b);

    // Difference between numbers
    int diff = a - b;

    // Find minimum without using comparison operators
    int minimum = b + (diff & (diff >> 31));

    // Print the result
    printf("%d", minimum);

    return 0;
}
