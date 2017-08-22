#include<stdio.h>
main()
{
inta,b,c;
printf("enter the values of three numbers");
scanf("%d,%d,%d,",&a,&b,&c);
if(a>b)&&(a>c)
{
printf("given number %d is bigger among %d and%d",a,b,c);
}
else
{
if(c>b)
{
printf("given number %d is biggest number among %d,%d",c,a,b);
}else
{
printf("given number %d is biggest number among %d,%d",b,a,c);
}
}
}
