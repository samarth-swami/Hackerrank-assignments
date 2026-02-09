#include <stdio.h>

int main() {

    int a, b, c;
    /*
        a = age
        b = annual income
        c = risk tolerance
    */

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    /* HIGH RISK CONDITIONS */
    if (a < 30) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if (a >= 30 && a <= 50 && b > 75000 && c == 3) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    else if (a > 50 && b > 75000 && c == 3) {
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }

    /* MEDIUM RISK CONDITIONS */
    else if (a >= 30 && a <= 50 && b <= 75000 && c == 2) {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    else if (a >= 30 && a <= 50 && b > 75000 && (c == 1 || c == 2)) {
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }

    /* LOW RISK CONDITIONS */
    else if (a > 50) {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    else if (b <= 30000 && (c == 1 || c == 2)) {
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }

    return 0;
}
