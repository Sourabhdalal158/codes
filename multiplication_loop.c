#include <stdio.h>
// Write a C program to print multiplication table of any number.
int main()
{
    int a = 1, n;
    printf("Enter your number : ");
    scanf("%d", &n);
    while (a <= 10)
    {
        printf("%d * %d = %d\n", n, a, n * a);
        a++;
    }
    return 0;
}