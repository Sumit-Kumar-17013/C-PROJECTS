#include<stdio.h>
//premeter of rectangle
int main(){
    float l , b ;
    printf("Enter the Lenght");
    scanf("%f" , &l);

    printf("Enter the breath");
    scanf("%f" , &b);

    printf("total perimeter is %f" , 2 * (l+b) );
    return 0;

}