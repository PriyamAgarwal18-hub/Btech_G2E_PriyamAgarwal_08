#include<stdio.h>
int main()
{
int r;
float area,circumference;
printf("Enter radius of circle:");
scanf("%d",&r);
area = 3.14*r*r;
circumference = 2*3.14*r;
printf("The area of circle is %f");
printf("The circumference of circle is %f");
return 0;
}
