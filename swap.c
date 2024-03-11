#include<stdio.h>
void main ()
{
int a, b, temp;
printf("enter two numbers\n");
scanf("\n%d\n%d",&a,&b);
printf("before swap a=%d & b=%d", a, b);

temp = a;
a = b;
b = temp;

printf("after swap a=%d & b=%d" ,a,b); 
}
