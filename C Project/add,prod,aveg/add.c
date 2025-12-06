#include<stdio.h>

// all of two numbers

void multipalofthree(int a, int b, int *sum, int *sub ,int *prod , int *div , int *avg);

int main(){
    int a , b ;
    int sum , sub , prod , div , avg ;
    printf("Enter the 1st No =");
    scanf("%d" , &a);

    printf("Enter the 2nd No =");
    scanf("%d" , &b); 

    multipalofthree(a, b, &sum, &sub , &prod , &div ,&avg);
    printf("Sum IS = %d \nSubtract Is = %d \nProduct Is = %d \nDivide Is = %d \nAverage Is = %d" , sum , sub , prod , div ,avg);
    return 0;

}
void multipalofthree(int a, int b, int *sum, int *sub, int *prod , int *div , int *avg){
    *sum =  a+b;
    *sub = a-b;
    *prod = a*b;
    *div = a/b;
    *avg = (a+b)/2;
}