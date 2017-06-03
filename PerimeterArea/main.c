#include <stdio.h>

#define M_PI 3.14159265358979323846

int main() {
    float radius;
    printf("Enter radius in cm: ");
    scanf("%f", &radius);
    printf("Perimeter is ~%.2fcm.\n", 2 * M_PI * radius);
    printf("Area is ~%.2fcm².\n", M_PI * radius * radius);
    return 0;
}