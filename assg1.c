/*Write a program to test whether a number even or odd or zero?*/
#include<stdio.h>

int main()
{
int a, b;
printf("Enter a number whether a number even or odd or zero:");
scanf("%d", &a);
b=a%2;

if(b==0)
{
printf("%d is even\n", a);
}
else if(b==1)
{
printf("%d is odd\n", a);
}
else 
{
printf("%d is zero\n", a);

}
}