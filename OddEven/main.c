#include <stdio.h>

int main() {
    int number;
    printf("Enter your integer: ");
    scanf("%d", &number);
    printf("%d %s\n", number, number % 2 == 0 ? "is even." : "is odd.");

    return 0;
}