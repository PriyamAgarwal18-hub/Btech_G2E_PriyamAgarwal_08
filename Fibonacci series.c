#include<stdio.h>
int main()
{
int num, term1, term2, nextterm;
term1=0, term2=1, nextterm=term1+term2;
printf("Enter the number of terms:");
scanf("%d",&num);
printf("Fibonacci series: %d%d", &term1, &term2);
for(int i=3; i<=num; i++)
{
printf("%d",&nextterm);
term2=term1;
term1=nextterm;
nextterm=term1+term2;
}
return 0;
}
