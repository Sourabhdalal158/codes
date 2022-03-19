#include<stdio.h>
#include<conio.h>
int x=12;
void main()
{
extern int y;
clrscr();
printf("ourabh\n ");
printf("x=%d\n y=%d",x,y);
getch();
}
int y=13;