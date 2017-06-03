#include <stdio.h>

float f(float x) {
    // f(x) = (2x + 3)(3x*x + 2)
    return (2*x +3) * (3 * x * x +2);
}

float getDeritativeFunction(float x, float h) {
    return (f(x + h) - f(x))/h;
}

int main() {
    float x, image;
    float xDeritative, hDeritative, resultDeritative;
    printf("Enter x value: ");
    scanf("%f", &x);
    image = f(x);
    printf("The image is %.2f\n\n", image);

    printf("Enter x for the deritative: ");
    scanf("%f", &xDeritative);
    printf("Enter h for the deritative: ");
    scanf("%f", &hDeritative);

    resultDeritative = getDeritativeFunction(xDeritative, hDeritative);
    printf("The result of the deritative is %.2f\n", resultDeritative);
    return 0;
}