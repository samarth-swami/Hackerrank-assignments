#include <stdio.h>

int main() {
    int a, b, c, d, e, f;

    /* Read inputs */
    scanf("%d", &a);  // Budget
    scanf("%d", &b);  // Number of guests
    scanf("%d", &c);  // Food cost per guest
    scanf("%d", &d);  // Decoration cost
    scanf("%d", &e);  // Music cost
    scanf("%d", &f);  // Extra expenses

    /* Calculate total food cost */
    int foodCost = b * c;

    /* Calculate total expenses */
    int totalCost = foodCost + d + e + f;

    /* Condition 1: Total cost must not exceed budget */
    if (totalCost > a) {
        printf("Celebration Denied");
        return 0;
    }

    /* Condition 2: Guest count must be between 6 and 50 */
    if (b <= 5 || b > 50) {
        printf("Celebration Denied");
        return 0;
    }

    /* Condition 3: Decoration or food cost constraint */
    if (!(d < 0.3 * a || foodCost < 0.5 * a)) {
        printf("Celebration Denied");
        return 0;
    }

    /* Condition 4: Music required if guests > 25 */
    if (b > 25 && e <= 0) {
        printf("Celebration Denied");
        return 0;
    }

    /* If all conditions are satisfied */
    printf("Celebration Approved");

    return 0;
}
