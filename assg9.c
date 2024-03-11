/*Write a simple calculator program using switch?*/
#include<stdio.h>
int main()

{
char opt;
float a, b, c;

printf("enter operation '+ - / *':");
scanf("%c", &opt);
printf("enter first number:");
scanf("%f", &a);
printf("enter second number:");
scanf("%f", &b);

switch(opt)
{
case '+':
c = a + b;
printf("you've selected addition.\nresult:%.1f\n", c);
break;

case '-':
c = a - b;
printf("you've selected subtraction.\nresult:%.1f\n", c);
break;

case '/':
c = a/b;
printf("you've selected division.\nresult:%.1f\n", c);
break;

case '*':
c = a*b;
printf("you've selected multiplication.\nresult:%.1f\n", c);
break;
}
}