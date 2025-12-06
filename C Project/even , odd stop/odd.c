#include<stdio.h>

int main(){
    do
    {
        int num;
        printf("Enter Any Number :");
        scanf("%d" , &num);
        if (num % 2 != 0)
        {
            printf("it's ODD Number");
            break;
        }
    } while (1);
    
   
}