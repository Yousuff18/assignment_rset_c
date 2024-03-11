#include<stdio.h>
void main()
{
float a, b, c, d, e, f, g, res;
printf("enter expression for ((a-b/c*d+e)*(f+g))");
printf("\nenter number a:");
scanf("%f" ,&a);
printf("enter number b:");
scanf("%f" ,&b);
printf("enter number c:");
scanf("%f" ,&c);
printf("enter number d:");
scanf("%f" ,&d);
printf("enter number e:");
scanf("%f" ,&e);
printf("enter number f:");
scanf("%f" ,&f);
printf("enter number g:");
scanf("%f" ,&g);

res= ((a-b/c*d+e)*(f+g));

printf("result of the arithmetic expression:%f\n", res); 

}
