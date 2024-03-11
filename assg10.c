/*Write a program to set a menu in coffee shop using switch?*/
#include <stdio.h>

int main() 
{
    char n;

    printf("MENU\nSelect an option:\n");
    printf("a. coffee\n");
    printf("b. tea\n");
    printf("c. bubble tea\n");
    printf("d. cold coffee\n\n");
    printf("Enter Option here: ");
    scanf("%c", &n);

    switch (n) {
        case 'a':
            printf("You've selected coffee\n");
            break;
        case 'b':
            printf("You've selected tea\n");
            break;
        case 'c':
            printf("You've selected bubble tea\n");
            break;
        case 'd':
            printf("You've selected cold coffee\n");
            break;
        default:
            printf("Wrong option.\n");
    }

    return 0;
}
