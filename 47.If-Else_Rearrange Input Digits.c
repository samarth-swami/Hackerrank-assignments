#include <stdio.h>

int main() {
    int n;
    int a, b, c, d;               // Digits
    int first, second, third, fourth; // Sorted digits

    /* Read the 4-digit number */
    scanf("%d", &n);

    /* Extract digits */
    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;

    /* Find the largest digit */
    if (a >= b && a >= c && a >= d) {
        first = a;

        if (b >= c && b >= d) {
            second = b;
            if (c >= d) {
                third = c;
                fourth = d;
            } else {
                third = d;
                fourth = c;
            }
        }
        else if (c >= b && c >= d) {
            second = c;
            if (b >= d) {
                third = b;
                fourth = d;
            } else {
                third = d;
                fourth = b;
            }
        }
        else {
            second = d;
            if (b >= c) {
                third = b;
                fourth = c;
            } else {
                third = c;
                fourth = b;
            }
        }
    }

    /* If b is the largest */
    else if (b >= a && b >= c && b >= d) {
        first = b;

        if (a >= c && a >= d) {
            second = a;
            if (c >= d) {
                third = c;
                fourth = d;
            } else {
                third = d;
                fourth = c;
            }
        }
        else if (c >= a && c >= d) {
            second = c;
            if (a >= d) {
                third = a;
                fourth = d;
            } else {
                third = d;
                fourth = a;
            }
        }
        else {
            second = d;
            if (a >= c) {
                third = a;
                fourth = c;
            } else {
                third = c;
                fourth = a;
            }
        }
    }

    /* If c is the largest */
    else if (c >= a && c >= b && c >= d) {
        first = c;

        if (a >= b && a >= d) {
            second = a;
            if (b >= d) {
                third = b;
                fourth = d;
            } else {
                third = d;
                fourth = b;
            }
        }
        else if (b >= a && b >= d) {
            second = b;
            if (a >= d) {
                third = a;
                fourth = d;
            } else {
                third = d;
                fourth = a;
            }
        }
        else {
            second = d;
            if (a >= b) {
                third = a;
                fourth = b;
            } else {
                third = b;
                fourth = a;
            }
        }
    }

    /* If d is the largest */
    else {
        first = d;

        if (a >= b && a >= c) {
            second = a;
            if (b >= c) {
                third = b;
                fourth = c;
            } else {
                third = c;
                fourth = b;
            }
        }
        else if (b >= a && b >= c) {
            second = b;
            if (a >= c) {
                third = a;
                fourth = c;
            } else {
                third = c;
                fourth = a;
            }
        }
        else {
            second = c;
            if (a >= b) {
                third = a;
                fourth = b;
            } else {
                third = b;
                fourth = a;
            }
        }
    }

    /* Print digits in descending order */
    printf("%d%d%d%d", first, second, third, fourth);

    return 0;
}
