#include<stdio.h>
#include<conio.h>
float avg(float a,float b,float c);
float avg(float a,float b,float c)
{
return((a+b+c)/3);}
void main()
{
int num1,num2,num3;
clrscr();
printf("\n Sourabh");
printf("\n enter the three numbers:");
scanf("%d%d%d",&num1,&num2,&num3);
printf("\n average pf three numbers=%2f",avg(num1,num2,num3));
getch();}