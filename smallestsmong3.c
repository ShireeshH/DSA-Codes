#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    int min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    printf("Smallest number: %d\n", min);
    return 0;
}
