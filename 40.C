#include<stdio.h>
#include<conio.h>
void main()
{int x[3][2],i,j,row,col;
clrscr();
printf("\n Sourabh");
printf("\n enter the number:");
for(i=0;i<3;i++)
for(j=0;j<2;j++)
scanf("%d",&x[i][j]);
printf("\n main matrics");
for(i=0;i<3;i++)
{for(j=0;j<2;j++)
printf("%d",x[i][j]);
printf("\n");}
printf("\n transpose matrics");
for(i=0;i<2;i++)
{for(j=0;j<3;j++)
printf("%d",x[i][j]);
printf("\n");}
getch();}