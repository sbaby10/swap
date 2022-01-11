#include<stdio.h>
int main()
{
  int a=23,b=34;
printf("\n before swapping a=%d,b=%a",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\after swapping a=%d,b=%d",a,b);
return 0;
}
