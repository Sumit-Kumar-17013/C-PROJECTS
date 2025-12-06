// Print n number of fabonacci Number

#include <stdio.h>

int main()
{
    int n;
    printf("Enter Number = ");
    scanf("%d", &n);

    int fac[n];
    fac[0] = 0;
    fac[1] = 1;

    printf("%d \t %d \t", fac[0], fac[1]);

    for (int i = 2; i < n; i++)
    {
        fac[i] = fac[i - 1] + fac[i - 2];
        printf("%d \t", fac[i]);
    }
    printf("\n");
    return 0;
}
3