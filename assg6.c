#include<stdio.h>

int main()
{
    char n;
    printf("MENU\nselect an option:\na. coffee\nb. tea\nc. bubble tea\nd. cold coffee\n\nEnter Option here:");
    scanf("%c", &n);

    if (n=='a')
    {
        printf("You've selected coffee");
    }

    else if (n=='b')
    {
        printf("You've selected tea");
    }

    else if (n=='c')
    {
        printf("You've selected bubble tea");
    
    }

    else if (n=='d')
    {
        printf("You've selected cold coffee");
    }

    else
    {
        printf("Wrong option.");
    }

}