#include <stdio.h>
// Averages of numbers

int main(){
    int a , b ,c ;
    printf("Enter a First Number :");
    scanf("%d" , &a);

    printf("Enter a Second Number :");
    scanf("%d" , &b);

    printf("Enter a Third Number :");
    scanf("%d" , &c);

    printf("Average number Is : %d" , (a + b + c)/3 );

    return 0;
}