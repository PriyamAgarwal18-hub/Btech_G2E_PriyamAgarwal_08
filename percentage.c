#include<stdio.h>
int main()
{
float m1,m2,m3,m4,m5;
float sum,percentage;
printf("enter the marks of 5 subjects:\n");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
sum = m1+m2+m3+m4+m5;
percentage = (sum/500)*100;
printf("Total Marks = %.2f\n",sum);
printf("Total Percentage marks = %.2f%f%f\n",percentage);
return 0;
}
