#include<stdio.h>
#include<string.h>
int main()
{
char mn[200];
printf("Enter mobile number\n");
gets(mn);
if(strlen(mn)==10)
printf("Number is correct");
else
printf("Incorrect Number");	
}

