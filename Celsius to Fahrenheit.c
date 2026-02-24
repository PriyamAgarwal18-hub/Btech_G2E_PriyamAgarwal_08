#include<stdio.h>
int main()
{
float C,F;
printf("Enter the temperature in C");
scanf("%f",&C);
F = 32 + 9*C/5;
printf("The converted temperature in F is: %f",F);
return 0;
}
