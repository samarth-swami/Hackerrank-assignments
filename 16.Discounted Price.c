#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float calculateDiscountedPrice(float price, float percent)
{
    float discountAmount = (price * percent) / 100;
    float finalPrice = price - discountAmount;

    return finalPrice;
}

int main()
{
    float originalPrice;
    float discountPercent;
    float finalPrice;

    scanf("%f %f", &originalPrice, &discountPercent);

    finalPrice = calculateDiscountedPrice(originalPrice, discountPercent);

    printf("The final price is: %.2f", finalPrice);

    return 0;
}
