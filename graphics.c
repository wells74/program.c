#include<stdio.h>
#include<conio.h>
int main() {
	clrscr();
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\tc\\bgi"); //initialization of graphic mode 
    circle(150,200,50);
    getch();
    closegraph();//closing of graphic mode 
}