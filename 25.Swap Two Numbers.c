#include <stdio.h>

int main() {
    int first, second;

    // Read two integers
    scanf("%d %d", &first, &second);

    // Swap values without using a temporary variable
    first = first + second;
    second = first - second;
    first = first - second;

    // Print the swapped values
    printf("a = %d\nb = %d", first, second);

    return 0;
}
