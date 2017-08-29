#include< stdio.h>
main()
{
int n,sum=0,i;
printf("enter the n value");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("sum of given %d is %d",n,sum);
}
