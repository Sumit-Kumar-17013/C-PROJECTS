#include<stdio.h>

int main(){
    int num;
    do
    {
        
        printf("Enter Any Number :");
        scanf("%d" , &num);
        if (num % 7 == 0)
        {
            printf("it's Multiple of 7");
            break;
        }
    } while (num % 7 != 0);
    return 0;
}