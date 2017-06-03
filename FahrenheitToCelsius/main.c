#include <stdio.h>
float FToCelsius(float far) {
    return 0.55556 * (far - 32);
}
int main() {
    float input, result;
    printf("Convert Fahrenheit to Celsius: ");
    scanf("%f", &input);
    result = FToCelsius(input);
    printf("%f°Fahrenheit = %f°C.\n", input, result);
    return 0;
}
