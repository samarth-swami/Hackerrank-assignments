#include <stdio.h>

int main() {

    int number, bitPosition;

    scanf("%d %d", &number, &bitPosition);

    number = number | (1 << bitPosition);

    printf("%d", number);

    return 0;
}
