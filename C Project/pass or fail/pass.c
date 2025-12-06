#include<stdio.h>
#include<conio.h>

float main(){
    float num;
    printf("Enter The Number In Percent :");
    scanf("%f" , &num);

    if (num <= 100 && num >= 60)
    {
        printf("1st Division \n");
    }else if (num < 60 && num >= 45)
    {
        printf("2nd Division \n");

    } else if ( num < 45 && num >= 33)
    {
        printf("3rd Division \n");
      
    } else if (num < 33 && num > 0 )
    {
        printf("Fail");

    } else{
        printf("Not Valid");
    } 
    
 return 0;
} 
