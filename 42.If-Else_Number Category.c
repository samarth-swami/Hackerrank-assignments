#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    int flag = 0;

    scanf("%d", &n);

    /* Case A:
       Divisible by 2 and 3, but NOT divisible by 5 */
    if (n % 2 == 0 && n % 3 == 0 && n % 5 != 0) {
        printf("A");
        flag = 1;
    }

    /* Case B:
       Specific numbers greater than 20 */
    else if (n > 20 &&
            (n == 21 || n == 22 || n == 33 ||
             n == 35 || n == 55 || n == 77)) {
        printf("B");
        flag = 1;
    }

    /* Case C:
       Divisible by 3 or 7 (but not both),
       and is a 2-digit number */
    else if (
        ((n % 3 == 0 && n % 7 != 0) ||
         (n % 3 != 0 && n % 7 == 0)) &&
        (abs(n) >= 10 && abs(n) <= 99)
    ) {
        printf("C");
        flag = 1;
    }

    /* Case D:
       Positive perfect square less than 200 */
    else if (n > 0 && n < 200) {
        int root = sqrt(n);
        if (root * root == n) {
            printf("D");
            flag = 1;
        }
    }

    /* Case E:
       If none of the above conditions matched */
    if (flag == 0) {
        printf("E");
    }

    return 0;
}
