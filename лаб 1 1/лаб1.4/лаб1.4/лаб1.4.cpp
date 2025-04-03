#include <stdio.h>

int main() {
    int integerPart;
    float decimalPart;

    printf("Enter an integer: ");
    scanf_s("%d", &integerPart);
    printf("Enter a floating-point number: ");
    scanf_s("%f", &decimalPart);

    printf("Sum: %.2f\n", integerPart + decimalPart);

    return 0;
}
