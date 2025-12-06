#include <stdio.h>

int even_no(int arr[], int n);

int main()
{
    int n;
    printf("Enter The End value = ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = i;
    }

    printf("The Total Number From 0 to End Value = %d \n", even_no(arr, n + 1));
    return 0;
}

int even_no(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
