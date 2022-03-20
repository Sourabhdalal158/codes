#include<stdio.h>
// Write a C program to print all natural numbers from 1 to n. - using while loop
int main(){
int a,n;
printf("Enter the value of n\n");
scanf("%d",&n);
for(a=0;a<=n;a++)

{
    printf("%d\n",a);
    
}
printf("\n\n");
// Write a C program to print all natural numbers in reverse (from n to 1)
for(a=0;a<=n;n--)
{  
    printf("%d\n",n);
    
}
return 0;
}