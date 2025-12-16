#include <stdio.h>

int timeToSeconds(int hours, int minutes, int seconds) {
    return hours * 3600 + minutes * 60 + seconds;
}

int main() {
   int hours, minutes, seconds;
    int totalSeconds;
     
    scanf("%d", &hours);
    
    scanf("%d", &minutes);
   
    scanf("%d", &seconds);
    
   totalSeconds = timeToSeconds(hours, minutes, seconds);
    printf("Total seconds: %d", totalSeconds);
    return 0;
}