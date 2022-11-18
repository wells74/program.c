#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int i;
 while(i<=70)
 {
 	if(i>=60)
 	setcolor(1);
 	else if(i>=50)
 	setcolor(2);
 	else if(i>=40)
 	setcolor(3);
 	else if(i>=30)
 	setcolor(4);
 	else if(i>=20)
 	setcolor(5);
 	else if(i>=10)
 	setcolor(6);
 	else
 	setcolor(7);
 	circle(150,150,i);
 	delay(50);
 	i++;
 }
 getch();
}
