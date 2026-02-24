#include<stdio.h>
int main()
{
int a,b,temp;
printf("Enter any 2 numbers:");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("The swaped variables are: %d and %d",a,b);
return 0;
}
