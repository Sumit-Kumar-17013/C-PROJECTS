#include <stdio.h>
#include <math.h>

// addtion of input number

int main()
{
    int n;
    printf("Enter The Number :");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum is %d", sum);

    return 0;
}