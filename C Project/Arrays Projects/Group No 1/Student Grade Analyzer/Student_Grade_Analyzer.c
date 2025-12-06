// Student Grade Analyzer

#include <stdio.h>

char grade(float avg)
{
    if (avg <= 100 && avg >= 90)
    {
        return 'A';
    }
    else if (avg < 90 && avg >= 75)
    {
        return 'B';
    }
    else if (avg < 75 && avg >= 60)
    {
        return 'C';
    }
    else if (avg < 60 && avg >= 45)
    {
        return 'D';
    }
    else if (avg < 45 && avg >= 33)
    {
        return 'E';
    }
    else if (avg < 33 && avg >= 0)
    {
        return 'F';
    }
    else
    {
        return 'X'; // Null value
    }
}

int main()
{
    int n;
    printf("Enter the Number of Student = ");
    scanf("%d", &n);

    char subjects[5][15] = {"Physics = ", "Chemistry = ", "Math = ", "English = ", "C-Language = "};

    int marks[n][5];
    float avg[n];
    float classSum = 0;

    int topper = 0;
    float HighestAvg = -1.0;

    for (int i = 0; i < n; i++) // this Loop take input From User.
    {
        printf("\nEnter The marks of Student : \n", i + 1);
        for (int j = 0; j < 5; j++)
        {
            printf("%s", subjects[j]);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum = sum + marks[i][j];
        }

        avg[i] = sum / 5.0;
        classSum = classSum + avg[i];

        if (avg[i] > HighestAvg)
        {
            HighestAvg = avg[i];
            topper = i;
        }
    }

    printf("\t________Student Result_________\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student = %d\n", i + 1);
        printf("Average = %.2f\n", avg[i]);
        printf("Grade = %c\n", grade(avg[i]));
    }
    printf("Class Average = %.2f \n", classSum / n);
    printf("Topper is Student %d with Average %.2f , Grade = %c \n", topper + 1, HighestAvg, grade(HighestAvg));
    return 0;
}
