#include <stdio.h>

int main()
{
    int n, num;
    printf("Enter a number : ");
    scanf("%d", &n);

    num=n%10;
    // first = n;
    while (n >= 10)
    {
        // if (first < 100)
        // {
            n = n / 10;
        }
        // else if (first>= 100)
        // {
        //     first= first / 100;
        // }
    
    printf("First digit = %d\n", n);
    // first++;
    
    printf("last digit = %d",num);

    return 0;
}