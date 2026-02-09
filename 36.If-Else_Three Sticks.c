#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Read triangle sides
    scanf("%d %d %d", &side1, &side2, &side3);

    // Print lengths
    printf("Lengths: [%d, %d, %d]\n", side1, side2, side3);

    // Check if the triangle is valid
    if (side1 + side2 <= side3 ||
        side1 + side3 <= side2 ||
        side2 + side3 <= side1) {

        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.\n");
    }
    // Equilateral triangle
    else if (side1 == side2 && side2 == side3) {
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.\n");
    }
    // Isosceles triangle
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.\n");
    }
    // Scalene triangle
    else {
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.\n");
    }

    return 0;
}
