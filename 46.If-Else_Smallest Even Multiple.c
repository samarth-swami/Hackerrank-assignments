#include <stdio.h>

int main() {
    int n;

    /* Read the input number */
    scanf("%d", &n);

    /* Check if the number is even */
    if (n % 2 == 0) {
        printf("%d", n);
    }
    else {
        printf("%d", n * 2);
    }

    return 0;
}
