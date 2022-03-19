#include<stdio.h>
#include<string.h>
int main()
{
char a[20],c;
printf("sourabh");
puts("\n enter the string");
gets(a);
c=*a;
strrev(a);
if(c==*a)
{
puts("given string is palindrome");}
else{
puts("given string is not palindrome");
}

}