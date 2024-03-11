/*Write a simple calculator program using else if?*/
#include<stdio.h>
int main()

{

float a, b, c;
char opt;

printf("enter operation '+ - / *':");
scanf("%c", &opt);
printf("enter first number:");
scanf("%f", &a);
printf("enter second number:");
scanf("%f", &b);

if (opt=='+')
{
c = a + b;
printf("you've selected addition.\nresult:%.1f\n", c);
}
else if (opt=='-')
{
c = a - c;
printf("you've selected subtraction.\nresult:%.1f\n", c);
}
else if (opt=='/')
{
c = a/b;
printf("you've selected division.\nresult:%.1f\n", c);
}
else if (opt=='*')
{
c = a*b;
printf("you've selected multiplication.\nresult:%.1f\n", c);
}
else
{
printf("wrong operator/input\n");
}

}
