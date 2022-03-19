#include<stdio.h>
#include<conio.h>
void main()
{
int rows,x=0;
clrscr();
printf("Sourabh");
printf("\n enter the number of rows:");
scanf("%d",&rows);
for(int i=1;i<=rows;i++)
{for (int j=1;j<=i;j++)
{
x++;
printf("%d",x);}
printf("\n");
}
getch();
}