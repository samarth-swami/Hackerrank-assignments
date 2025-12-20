#include <stdio.h>

int main() {

    int hour24, minutes;
    scanf("%d %d", &hour24, &minutes);

    if (hour24 == 0) {
        printf("12:%02d AM", minutes);
    }
    else if (hour24 > 0 && hour24 < 12) {
        printf("%d:%02d AM", hour24, minutes);
    }
    else if (hour24 == 12) {
        printf("12:%02d PM", minutes);
    }
    else if (hour24 > 12 && hour24 <= 23) {
        int hour12 = hour24 - 12;
        printf("%d:%02d PM", hour12, minutes);
    }

    return 0;
}

