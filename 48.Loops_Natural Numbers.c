#include <stdio.h>

int main() {
    int n;

    /* Read the input value */
    scanf("%d", &n);

    /* Print numbers from 1 to n */
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    return 0;
}
