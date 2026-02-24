#include<stdio.h>
int main()
{
int n,factorial=1;
printf("Enter the number to find the factorial of:");
scanf("%d",&n);
for(int i=1; i<=n; i=i+1)
{
factorial=factorial*i;
}
printf("Factorial of given number is %d",factorial);
return 0;
}
