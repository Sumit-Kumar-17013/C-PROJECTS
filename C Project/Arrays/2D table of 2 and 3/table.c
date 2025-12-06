// 2D array print table input by user one time 2 table print

#include <stdio.h>

void storetable(int arr[][10], int row, int colume, int number);

int main()
{
    int table[2][10];
    int num1, num2;
    printf("Enter First Number = ");
    scanf("%d", &num1);

    printf("Enter First Number = ");
    scanf("%d", &num2);

    storetable(table, 0, 10, num1);
    storetable(table, 1, 10, num2);

    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", table[0][i]);
    }

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", table[1][i]);
    }
    printf("\n");

    return 0;
}

void storetable(int arr[][10], int row, int colume, int number)
{
    for (int i = 0; i < colume; i++)
    {
        arr[row][i] = number * (i + 1);
    }
}
