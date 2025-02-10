#include <stdio.h>
int main() {
    float number;
    printf("Enter a floating point number: ");
    scanf("%f", &number);

    // Printing the floating point number using printf
    printf("You entered: %.2f\n", number);

    return 0;
}
