#include<stdio.h>
#include<math.h>

float main(){
    float num;
    printf("Enter Number(0-100) :");
    scanf("%f" , &num);

    if (num <= 100 && num >= 90)
    {
        printf("A+");
    } else if (num >= 70 && num < 90)
    {
        printf("A");
    } else if (num < 70 && num >= 30)
    {
        printf("B");
    } else if (num >= 0 && num < 30)
    {
        printf("C");
    }
    else 
        printf("Not Valid");

    return 0;    
    
    
}