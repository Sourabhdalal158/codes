#include<stdio.h>
#include<string.h>

void main()
{
    struct student
{
int age;
char name [20];
};
struct student s1=("10, Sourabh")
struct student *ptr
         ptr=&s1 ;
         printf("%d,%s"s1.age, s1.name);
         printf("%d,%s",ptr->,ptr->name);

         return 0;

}