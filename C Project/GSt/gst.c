#include<stdio.h>

void printcalculator(float value);

float main(){
    float value ;
    printf("enter the amount : ");
    scanf("%f" , &value);

    printcalculator(value);
    return 0;
}


void printcalculator(float value){
    value = value + (0.18 * value);
    printf("The GST Value Is : %f" , value);
}