#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    /* Case 1: Circle */
    if (n == 0) {
        printf("Circle");
    }

    /* Case 2: Triangle */
    else if (n == 3) {
        int a, b, c;
        int A, B, C;

        scanf("%d %d %d %d %d %d", &a, &b, &c, &A, &B, &C);

        /* Triangle validity check */
        if (a <= 0 || b <= 0 || c <= 0 ||
            A <= 0 || B <= 0 || C <= 0 ||
            A + B + C != 180 ||
            a + b <= c || a + c <= b || b + c <= a) {
            printf("Invalid Figure");
        }

        /* Equilateral Triangle */
        else if (a == b && b == c &&
                 A == 60 && B == 60 && C == 60) {
            printf("Equilateral Triangle");
        }

        /* Isosceles Triangle */
        else if (
            (a == b && A == B && c != a && A != C) ||
            (a == c && A == C && b != a && B != A) ||
            (b == c && B == C && a != b && A != B)
        ) {
            printf("Isosceles Triangle");
        }

        /* Scalene Triangle */
        else if (a != b && b != c && a != c &&
                 A != B && B != C && A != C) {
            printf("Scalene Triangle");
        }

        /* Invalid Triangle */
        else {
            printf("Invalid Figure");
        }
    }

    /* Case 3: Quadrilateral */
    else if (n == 4) {
        int a, b, c, d;
        int A, B, C, D;

        scanf("%d %d %d %d %d %d %d %d",
              &a, &b, &c, &d, &A, &B, &C, &D);

        /* Quadrilateral validity check */
        if (a <= 0 || b <= 0 || c <= 0 || d <= 0 ||
            A <= 0 || B <= 0 || C <= 0 || D <= 0 ||
            A + B + C + D != 360) {
            printf("Invalid Figure");
        }

        /* Square */
        else if (a == b && b == c && c == d &&
                 A == 90 && B == 90 && C == 90 && D == 90) {
            printf("Square");
        }

        /* Rectangle */
        else if (a == c && b == d &&
                 A == 90 && B == 90 && C == 90 && D == 90) {
            printf("Rectangle");
        }

        /* Rhombus */
        else if (a == b && b == c && c == d &&
                 A == C && B == D && A != B) {
            printf("Rhombus");
        }

        /* Parallelogram */
        else if (a == c && b == d &&
                 a != b && A == C && B == D && A != B) {
            printf("Parallelogram");
        }

        /* Invalid Quadrilateral */
        else {
            printf("Invalid Figure");
        }
    }

    return 0;
}
