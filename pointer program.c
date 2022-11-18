//Program to print table of a number using functions.

#include<stdio.h>
int main()
 {
 int a=10;
int *p;
p=&a;
printf("value of a=%d\n",a);
 printf("address of a=%d\n",&a)
; printf("value of p=%d\n",p);
 printf("address of p=%d\n",&p);
 printf("value of *p=%d\n",*p);
 }