#include <stdio.h>

int main() {
    int n, i;

    // Read input
    scanf("%d", &n);
    scanf("%d", &i);

    // Toggle the i-th bit
    int result = n ^ (1 << i);

    // Print the updated value
    printf("%d", result);

    return 0;
}

