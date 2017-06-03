#include <stdio.h>

float getImageFunction(float x) {
    // f(x) = (2x + 3)(3x*x + 2)
    return (2*x +3) * (3 * x * x +2);
}

int main() {
    float x, image;
    printf("Enter x value: ");
    scanf("%f", &x);
    image = getImageFunction(x);
    printf("The image is %f\n", image);
    return 0;
}