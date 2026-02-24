#include<stdio.h>
int main()
{
int year;
printf("Enter the year to be checked:");
scanf("%d",&year);
if(year%4==0)
{
printf("Entered year is leap year");
}
else
{
printf("Entered year is not leap year");
}
return 0;
}
