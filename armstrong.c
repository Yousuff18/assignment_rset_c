/* Read a Natural Number and check whether the number is Armstrong or not*/
#include <stdio.h>
#include <math.h> 

int main() {
    int num1, remainder, n = 0, result = 0;

    printf("Enter a natural number: ");
    scanf("%d", &num1);

    int temp = num1;
    while (temp != 0) {
        temp /= 10;
        ++n;
    }

    temp = num1;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, n);
        temp /= 10;
    }

    if (result == num1) {
        printf("%d is an Armstrong number.\n", num1);
    } else {
        printf("%d is not an Armstrong number.\n", num1);
    }

    return 0;
}
