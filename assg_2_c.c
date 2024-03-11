/*1. Write a program to get an input from user and display the patterns.(c)*/
#include <stdio.h>

int main()
 {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = rows; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
