#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,ch;
clrscr();
printf("\n NAME=Sourabh");
printf("\n enter the value of a:");
scanf("%d",&a);
printf("\n enter the value of b:");
scanf("%d",&b);
printf("\n arithmatic function");
printf("\n 1.addtion");
printf("\n 2.subtraction");
printf("\n 3.multiply");
printf("\n 4.divide");
printf("\n 5.modulas");
printf("\n enter your choice=");
scanf("%d",ch);
if(ch>=1&&ch<=5)
{
printf("\n ch");
}
else
{
printf("\n wrong");
}
getch();
}