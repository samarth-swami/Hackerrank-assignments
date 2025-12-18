#include <stdio.h>

int main() {
    int integerValue;
    long longValue;
    char characterValue;
    float floatValue;
    double doubleValue;

    scanf("%d %ld %c %f %lf",
          &integerValue,
          &longValue,
          &characterValue,
          &floatValue,
          &doubleValue);

    printf("%d\n", integerValue);
    printf("%ld\n", longValue);
    printf("%c\n", characterValue);
    printf("%.3f\n", floatValue);
    printf("%.9f\n", doubleValue);

    return 0;
}
