#include <stdio.h>
float CelsiusToFahrenheit(float celsius) {
    return celsius / 0.55556 + 32;
}
int main() {
    float input, result;
    printf("Convert Celsius to Fahrenheit: ");
    scanf("%f", &input);
    result = CelsiusToFahrenheit(input);
    printf("%f°C = %f° Fahrenheit.\n", input, result);
    
    return 0;
}
 
