#include <stdio.h>

int main()
{
    int number;

    // Read input
    scanf("%d", &number);

    // Check even or odd using bitwise AND
    if ((number & 1) == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }

    return 0;
}
