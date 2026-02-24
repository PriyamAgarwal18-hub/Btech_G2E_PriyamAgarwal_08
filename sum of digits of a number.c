#include<stdio.h>
int main()
{
int num,r,n,sum=0;
printf("Enter the number");
scanf("%d",&num);
while(num=0)
{
r=n%10;
sum=sum+r;
n=n/10;
}
printf("The sum of digits of number is: %d",sum);
return 0;
}
