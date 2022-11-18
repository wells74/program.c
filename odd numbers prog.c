//Program to print table of a number using functions.

#include<stdio.h>
main()
{
int u;
u=2;
while(u<=1000000)
{
if(u%2!=0)
printf("%d\n",u);
u=u+1;
}
}
