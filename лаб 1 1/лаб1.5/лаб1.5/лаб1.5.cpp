#include <stdio.h>

int main() {
    char symbol;

    printf("Enter a character: ");
    scanf_s("%c", &symbol);

    printf("Next character: %c\n", symbol + 1);

    return 0;
}
