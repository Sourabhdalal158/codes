#include<stdio.h>
#include<string.h>
 struct student {
     int marks[10];
     char name[10];
 };
 int main()
 {
    int i;
 struct student st[10];
 printf("enter record of student :");
 for(i=0;i<10;i++)
 {
     printf("\nenter marks:");
     scanf("%d",&st[i].marks);
     printf("\n enter name :");
     scanf("%s",&st[i].name);
    
 }
 printf("\n student info");
 for(i=0;i<10;i++){
     printf("\n marks%d,name%s",st[i].marks,st[i].name);
 }
 return 0;
 }
