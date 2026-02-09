#include <stdio.h>

int main() {
    int n, i;

    
    scanf("%d", &n);
    scanf("%d", &i);
 
    int result = n & ~(1 << i);
    printf("%d", result);

    return 0;
}
