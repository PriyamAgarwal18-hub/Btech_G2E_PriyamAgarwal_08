#include<stdio.h>
int main()
{
int n,arr[n],sum=0,i;
printf("Enter the number of elements:");
scanf("%d",&n);
for(i=0; i<n; i++)
{
scanf("%d",&arr[i]);
}
for(i=0; i<n; i++)
{
sum=arr[i];
}
printf("sum:%d",sum);
return 0;
}
