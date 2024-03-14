/*Write a program to find largest of three numbers?*/
#include<stdio.h>

int main()
{
int a, b, c;
printf("enter first number to be compared:");
scanf("%d", &a);
printf("enter second number to be compared:");
scanf("%d", &b);
printf("enter third number to be compared:");
scanf("%d", &c);

if (a>b & a>c)
{
printf("%d is greatest", a);
}

else if (b>a & b>c)
{
printf("%d is greatest", b);
}

else if (c>a & c>b)
{
printf("%d is greatest", c);
}
}
