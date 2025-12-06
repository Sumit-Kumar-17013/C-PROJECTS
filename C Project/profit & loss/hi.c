#include<stdio.h>
#include <math.h>
// profit and loss

int main(){
    float p , s ;
    printf("Enter The Purchase Amount :");
    scanf("%f" , &p);

    printf("Enter the Sell Amount :");
    scanf("%f" , &s);

    if (p>s)
    {
        
        printf("it's loss : %f", p - s );
      }
        else 
            printf("it's Profit : %f", s - p );
   
      return 0;
    }