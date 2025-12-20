#include <stdio.h>

int buildNumber(int thousandDigit, int hundredDigit, int tenDigit, int unitDigit) {
    int joinedNumber = thousandDigit * 1000
                     + hundredDigit * 100
                     + tenDigit * 10
                     + unitDigit;

    return joinedNumber * 5;   // 5th multiple of the joined number
}

int main() {
    int digit1, digit2, digit3, digit4;
    int fifthMultiple;

    scanf("%d %d %d %d", &digit1, &digit2, &digit3, &digit4);

    fifthMultiple = buildNumber(digit1, digit2, digit3, digit4);

    printf("The number is: %d", fifthMultiple);

    return 0;
}
