// 2D matrix of Rows and Columns

#include <stdio.h>
int main()
{
    int martix[2][3];
    printf("Enter the Matrix Of (2*3)\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Elements [%d][%d] = ", i, j);
            scanf("%d", &martix[i][j]);
        }
    }
    printf("\nMatrix = \n");
    for (int i = 0; i < 2; i++)
    {
        printf("[");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", martix[i][j]);
        }
        printf("]");
        printf("\n");
    }
    return 0;
}