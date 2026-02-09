#include <stdio.h>

int main() {
    int n;

    // Read input
    scanf("%d", &n);

    // Clear the rightmost set bit
    int result = n & (n - 1);

    // Print the result
    printf("%d", result);

    return 0;
}
