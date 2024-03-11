#include<stdio.h>

void main()

{


float a, b;

printf("Enter first number:");
scanf("%f", &a);
printf("Enter second number:");
scanf("%f", &b);

if(a>b)
{
printf("%.1f is larger than %.1f\n", a, b);
}
else if(b>a)
{
printf("%.1f is larger than %.1f\n", b, a);
}
else if(a=b)
{
printf("%.1f is equal to %.1f\n", a, b);

}
else
{
printf("error, check again!\n");
}




}