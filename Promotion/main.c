#include <stdio.h>

float promotion(float price) {
    return price - (price * 0.1);
}

int main() {
    float inputPrice, resultPrice;
    printf("Enter the price of the product: ");
    scanf("%f", &inputPrice);
    resultPrice = promotion(inputPrice);
    printf("The new price is %.2f€.\n", resultPrice);
    return 0;
}