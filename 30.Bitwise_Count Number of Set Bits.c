#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Count set bits in the rightmost 4 bits
    int count =
        (n & 1) +
        ((n >> 1) & 1) +
        ((n >> 2) & 1) +
        ((n >> 3) & 1);

    printf("%d", count);

    return 0;
}
