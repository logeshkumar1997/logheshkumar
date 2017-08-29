#include<stdio.h>
#include<comio.h>
main()
{
char d;
  clrscr();
  printf(" enter the charecter ");
  scanf("%c",&d);
  if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u')
  {
    printf("given character %c is charaecter ",d)
  }
  else
  {
    printf(" given charecter %c is  constant",d);
  }
}
