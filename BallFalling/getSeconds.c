#include <stdio.h>
#include <math.h>

float getSeconds(float height) {
    float g = 9.81;
    float seconds = sqrt(height / g / 0.5);
    return seconds;
}

int main() {
    float height, seconds;
    printf("Enter the height of the building in meters: ");
    scanf("%f", &height);
    seconds = getSeconds(height);
    printf("The ball felt for %.2f seconds.\n", seconds);
    return 0;
}