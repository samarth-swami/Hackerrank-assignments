#include <stdio.h>

void splitDigits(int number) {
    int hundredsDigit = number / 100;
    int tensDigit     = (number / 10) % 10;
    int onesDigit     = number % 10;

    printf("%d %d %d", hundredsDigit, tensDigit, onesDigit);
}

int main() {
    int number;
    scanf("%d", &number);
    splitDigits(number);
    return 0;
}
