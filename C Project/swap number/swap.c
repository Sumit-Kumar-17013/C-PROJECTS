#include <stdio.h>

void swapnumber(int *a, int *b);

int main()
{
    int x, y;
    printf("enter no x = ");
    scanf("%d", &x);

    printf("enter no y = ");
    scanf("%d", &y);

    swapnumber(&x, &y);
    printf("x = %d , y = %d", x, y);
    return 0;
}

void swapnumber(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    printf("the swap number is =\n", *a, *b);
}