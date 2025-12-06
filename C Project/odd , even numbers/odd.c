#include<stdio.h>
/* find the odd or even numbers*/

int main(){
    int num;
    printf("Enter the Number : ");
    scanf("%d" , &num);
    printf("it's even %d \n" , num % 2 == 0 );
    printf("It's odd %d \n" , num % 2 != 0);

    
    return 0;

}