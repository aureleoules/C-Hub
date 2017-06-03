#include <stdio.h>

float getBallFallHeight(float seconds) {
    // h = (1/2)g.t²
    float g = 9.81;
    float h = 0.5 * g * seconds * seconds;
    return h;
}

int main() {
    float seconds, fallHeight;
    printf("Enter the falling time in seconds: ");
    scanf("%f", &seconds);
    fallHeight = getBallFallHeight(seconds);
    printf("The ball fell for ~%.2f meters.\n", fallHeight);
    return 0;
}