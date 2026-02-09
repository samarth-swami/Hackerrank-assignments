#include <stdio.h>

int main() {
    int n;

    /* Read the input value */
    scanf("%d", &n);

    /* Print all even numbers from 2 to n */
    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }

    return 0;
}
