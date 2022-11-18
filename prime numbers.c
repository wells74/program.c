//Program to print table of a number using functions.

#include<stdio.h>
int main() 
{
 int n;
 	printf("Enter number upto you want to print prime number\n");
 	scanf("%d",&n); 	
for(int i=2;i<=n;i++) 
	{
 		int no=i,m=0;
 		for(int j=2;j<=no-1;j++)
 		{
 			if(no%j==0)
 			m=1;
 		}
 		if(m==0)
 		printf("%d ",no);
 	}
}