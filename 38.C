#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,c,n,i;
clrscr();
printf("\n Sourabh");
printf("\n enter the number of terms:");
scanf("%d",&n);
printf("\n fibonacci series:");
for(i=1;i<=n;i++)
{
printf("%d ",a);
c=a+b;
a=b;
b=c;
}
getch();
}
