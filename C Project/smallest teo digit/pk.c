#include<stdio.h>
// smallest no
int main(){
    int a , b;
    printf("Enter first no :");
    scanf("%d" , &a);

    printf("Enter second no :");
    scanf("%d" , &b);
    if (a < b) 
    {
        printf("The Smallest No : %d" , a );
    }
    else {
        printf("The smallest No : %d" , b );
    }
    return 0;
}