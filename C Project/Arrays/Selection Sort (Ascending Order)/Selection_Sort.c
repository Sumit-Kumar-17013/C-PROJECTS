// Selection Sort (Ascending Order)

#include <stdio.h>
int main()
{
    int n, minindex, temp;
    printf("Enter The Number OF element = ");
    scanf("%d", &n);

    int arry[n];
    printf("Enter The element = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arry[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        minindex = i;
        for (int j = i; j < n; j++)
        {
            if (arry[j] < arry[minindex])
            {
                minindex = j;
            }
        }

        temp = arry[i];
        arry[i] = arry[minindex];
        arry[minindex] = temp;
    }
    printf("Sorted Array in acending order = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arry[i]);
    }
    return 0;
}