/*Read a Natural Number and check whether the number is prime or not.*/
#include <stdio.h>

int main() {
    int num1,  num2 = 1;
   

 
    printf("Enter a natural number: ");
    scanf("%d", &num1);

    if (num1 <= 1) {
        num2= 0; 
    } else {
        for (int i = 2; i * i <= num1; ++i) {
            if (num1 % i == 0) {
                num2 = 0; 
                break;
            }
        }
    }

    if (num2) {
        printf("%d is a prime number.\n", num1);
    } else {
        printf("%d is not a prime number.\n", num1);
    }

    return 0;
}
