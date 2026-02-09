#include <stdio.h>

int main() {
    int first, second, third;

    // Read three integers
    scanf("%d %d %d", &first, &second, &third);

    int largest;

    // Determine the largest number
    if (first >= second && first >= third) {
        largest = first;
    } else if (second >= first && second >= third) {
        largest = second;
    } else {
        largest = third;
    }

    // Print the result
    printf("The largest number is : %d", largest);

    return 0;
}
