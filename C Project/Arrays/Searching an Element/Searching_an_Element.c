// Searching an Element in an Array

#include <stdio.h>
int main()
{
    int n, key;
    int power = 0;

    printf("Enter The Element of Number = ");
    scanf("%d", &n);

    int aar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &aar[i]);
    }

    printf("Enter The Element of search = ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        if (aar[i] == key)
        {
            printf("Element %d founded At postion %d", key, i + 1);
            power = 1;
            break;
        }
    }

    if (!power)
    {
        printf("Element %d Not founded in this array", key);
    }
    return 0;
}