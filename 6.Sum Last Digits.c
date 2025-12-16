#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sumLastDigits(int a, int b){
    return (a%10)+(b%10);
}

int main() {
     int a;
    int b;
    int res;
    scanf("%d", &a);
    scanf("%d", &b);
    
    res= sumLastDigits(a,b);
    printf("The sum of last digits is: %d",res);
        
    return 0;
}