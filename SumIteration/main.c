#include <stdio.h>
#include <math.h>
int main() {
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    for(int i = 1; i <= number; ++i) {
        sum += pow(i,3);
    }
    printf("The final sum is %d.\n", sum);
    return 0;
}