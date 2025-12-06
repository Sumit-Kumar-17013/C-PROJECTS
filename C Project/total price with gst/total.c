#include <stdio.h>

int main()
{
    float price[3];
    printf("Enter The 1st Prize = ");
    scanf("%f", &price[0]);

    printf("Enter The 2nd Prize = ");
    scanf("%f", &price[1]);

    printf("Enter The 3rd Prize = ");
    scanf("%f", &price[2]);

    printf("The Final prize of 1st = %.2f \n", price[0] = price[0] + (0.18 * price[0]));
    printf("The Final prize of 2nd = %.2f \n", price[1] = price[1] + (0.18 * price[1]));
    printf("The Final prize of 3rd = %.2f \n", price[2] = price[2] + (0.18 * price[2]));

    printf("The Total Price Of Three Item = %.2f ", price[0] + price[1] + price[2]);

    return 0;
}