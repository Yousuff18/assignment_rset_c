/*Write a program to test whether a number is negative or positive or zero using else if?*/
#include<stdio.h>
int main()
{

int a;
printf("Enter a number to check whether a number is negative or positive or zero:");
scanf("%d", &a);

if (a>0)
{
printf("%d is a positive number", a);
}

else if(a<0)
{
printf("%d is a negative number", a);
}

else if(a==0)
{
printf("%d is a zero\n", a);
}

}