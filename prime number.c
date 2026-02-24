#include<stdio.h>
int main()
{
int n,i,flag=0;
printf("Enter a number to be checked");
scanf("%d",&n);
if(n<=1)
flag=1;
for(i=2; i<=n; i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("%d is not a prime number");
else
printf("%d is a prime number");
return 0;
}
