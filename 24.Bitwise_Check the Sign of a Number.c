#include <stdio.h>

int main() {
    int n;

    // Read input
    scanf("%d", &n);

    // Extract the sign bit (0 = positive, 1 = negative)
    int signBit = (n >> 31) & 1;

    // Print result based on sign bit
    if (signBit == 1) {
        printf("Negative");
    } else {
        printf("Positive");
    }

    return 0;
}
