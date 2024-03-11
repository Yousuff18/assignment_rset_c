/*1. Write a program to get an input from user and display the patterns. (a)*/
#include<stdio.h>
int main()
{
    int i, n, x;

    printf("Enter the number of rows to be printed: ");
    scanf("%d", &n);

    for(x=1; x<=n; x++)
    {

    for(i=1; i<=x; i++)
    {
        printf("*");
    }

printf("\n");
    }
}
