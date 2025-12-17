#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int area(int length, int width){
    return length*width;
}

int main() {
    
       int length;
       int width;
    int res;
    scanf("%d", &length);
    scanf("%d", &width);
       res= area(length,width);
    printf("The area is: %d units", res);
    
    return 0;
}