#include<stdio.h>
int main()
{
int num, oddsum = 0,evensum = 0;
printf("Enter the number:");
scanf("%d",&num);
for(int i=0; i<=num; i++)
{
if(i%2==0)
{
evensum = evensum+i;
}
else
{
oddsum = oddsum+i;
}
}
printf("Sum of even numbers is: %d",evensum);
printf("Sum of odd numbers is: %d",oddsum);
return 0;
}
