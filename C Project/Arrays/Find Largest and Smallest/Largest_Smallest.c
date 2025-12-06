// Find the Largest and Smallest Elements in an Array

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of Element = ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d element = ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("Largest Element = %d", largest);
    printf("\n");
    printf("Smallest Element = %d", smallest);

    return 0;
}