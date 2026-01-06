#include <stdio.h>

int main() {

    int firstNumber, secondNumber;
    int lastDigitFirst, lastDigitSecond;

    scanf("%d %d", &firstNumber, &secondNumber);

    lastDigitFirst = firstNumber % 10;
    lastDigitSecond = secondNumber % 10;

    if (lastDigitFirst == lastDigitSecond) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
