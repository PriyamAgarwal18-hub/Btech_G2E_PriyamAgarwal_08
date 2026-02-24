#include<stdio.h>
int main()
{
int num,n,r,remain,reverse=0;
printf("Enter the number");
scanf("%d",&num);
while(n>0)
{
remain=n%10;
reverse=reverse*10+r;
num=num/10;
}
printf("The reverse of given number is: %d",reverse);
return 0;
}
