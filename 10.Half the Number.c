#include <stdio.h>

int main() {

    int number;
    float halfValue;

    scanf("%d", &number);
    halfValue = number / 2.0;

    printf("Half of %d is %.2f", number, halfValue);

    return 0;
}
