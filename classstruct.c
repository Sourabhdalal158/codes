#include<stdio.h>
#include<string.h>
struct stuc
{ int rollno ;
  char name[30];
  }st[10];
int main()
{
  int i;
  printf("Sourabh\n");
  printf("print student info\n");
  for(i=0;i<=10;i++)
  {
  printf("enter st.rollno\n");
  
  scanf("%d",&st[i].rollno);
  printf("enter name");
  scanf("%s",&st[i].name);}
  for(i=0;i<=10;i++)
  {
  printf("%d",st[i].rollno);
  printf("%s",st[i].name);
  }

  return 0;
  }
