# include<stdio.h>
main()
{
int n;
printf("enter the year");
scanf("%d",&n);
if(n%4==0)
{
printf("given year %d is leap year",n);
}
else
{
printf("give year %d is not a leap year");
}
}
