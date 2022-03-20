#include <stdio.h>
void wrongswap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int x = 5, y = 6;
    printf("Sourabh\n");
    printf("Before Swap\n");
    printf("x = %d, y = %d\n", x, y);
    
    swap(&x, &y);
    printf("After Swap\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b)
{
    int s;
    s = *a;
    *a = *b;
    *b = s;
}

