#include <stdio.h>
// Write a C program to find first and last digit of a number.
// Write a C program to find sum of first and last digit of a number.
// Write a C program to swap first and last digits of a number.
int main()
{
    int n, num,sum=0,swap;
    printf("Enter a number : ");
    scanf("%d", &n);
    num = n % 10;
   
    // for(n;n>=10;){
    //     n=n/10;
    // }

    // while (n >= 10)
    //  {  
    //       n = n / 10;
    // }
    do
    {
       n=n/10;
    } while (n>=10);
    
    printf("First digit = %d\n", n);
    printf("last digit = %d\n", num);
    sum=n+num;
    printf("Sum = %d\n",sum);
    //  swap=num;
    // num=n;
    // n=swap;
    // printf("after swap = %d, %d",n,num);
    return 0;
}