#include <stdio.h>

int main() {
    float number, factorial;
    printf("Enter a number: ");
    scanf("%f", &number);
    factorial = number;
    for(int i = 1; i < number; i++) {
        factorial *= i;
    }
    printf("The factorial of %.2f is %.2f.\n", number, factorial);
    return 0;
}