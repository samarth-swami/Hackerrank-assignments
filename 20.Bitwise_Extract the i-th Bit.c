#include <stdio.h>

int main() {
    int number, position;

    // Read the number and the bit position
    scanf("%d %d", &number, &position);

    // Shift the number right by 'position' and extract the bit
    int bitValue = (number >> position) & 1;

    // Print the extracted bit (0 or 1)
    printf("%d", bitValue);

    return 0;
}
