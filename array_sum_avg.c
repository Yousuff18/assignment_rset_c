#include<stdio.h>

int main(){

int n, i;
float sum = 0, avg;

printf("Enter the number of integers: ");
scanf("%d", &n);
int a[n];

printf("Enter %d integers:\n", n);

for(i=0; i<n; i++)
{
scanf("%d", &a[i]);

sum += a[i];
}

avg = sum/n;

printf("sum = %f ", sum);

printf("\naverage = %f ", avg);

}

