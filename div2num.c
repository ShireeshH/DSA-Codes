#include <stdio.h>

int main() {
    float num1, num2, quotient;
    printf("enter 2 numbers\n");
    scanf("%f%f",&num1,&num2);
    quotient = num1 / num2;
    printf("Quotient: %f\n", quotient);
    return 0;
}
