// write a program to find average marks obtained by a class of 05 students in a test.

#include <stdio.h>

int main()
{
    int sum = 0;
    float avg;
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter The Marks of Student %d = ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }

    avg = sum / 5;
    printf("Average = %.2f", avg);
    return 0;
}