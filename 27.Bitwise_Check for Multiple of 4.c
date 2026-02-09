#include <stdio.h>

int main() {
    int n;

    // Read input
    scanf("%d", &n);

    // Check if last two bits are zero
    if ((n & 3) == 0) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
