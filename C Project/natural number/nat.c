#include<stdio.h>

int main (){
    int num;
    printf("Enter the number :");
    scanf("%d" , &num);

    if (num > 0 && num <= 10000000000000000 )
    {
        printf("is't natural number");
    } else
    printf("not natural number");
    
    return 0;
}