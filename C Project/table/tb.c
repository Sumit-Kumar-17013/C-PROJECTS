#include<stdio.h>
#include<conio.h>

int main(){
    int num;
    printf("Enter any number :");
    scanf("%d" , &num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n" , num*i);
    }
    return 0;
}