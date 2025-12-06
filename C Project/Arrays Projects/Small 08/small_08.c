#include <stdio.h>

#define MENU_SIZE 5

int main()
{
    int i, itemID, quantity;
    char choice;
    double subTotal = 0.0, discount = 0.0, tax = 0.0, grandTotal = 0.0, itemTotal = 0.0;

    char itemNames[MENU_SIZE][30] = {
        "Masala Dosa",
        "Idli Sambar",
        "Veg Pulao",
        "Aloo Paratha",
        "Fruit Juice"};

    double itemPrices[MENU_SIZE] = {50, 40, 80, 60, 30};
    int orderQty[MENU_SIZE] = {0};

    printf("University Canteen Billing System\n");
    printf("---------------------------------\n");

    do
    {
        printf("\nMenu:\n");
        printf("ID\tItem\t\t\tPrice\n");

        for (i = 0; i < MENU_SIZE; i++)
        {
            printf("%d.\t%-20s %.2f\n", i + 1, itemNames[i], itemPrices[i]);
        }

        printf("\nEnter Item ID (1-%d): ", MENU_SIZE);
        scanf("%d", &itemID);

        if (itemID >= 1 && itemID <= MENU_SIZE)
        {
            printf("Enter Quantity: ");
            scanf("%d", &quantity);

            if (quantity > 0)
            {
                orderQty[itemID - 1] += quantity;
                printf("Item added.\n");
            }
            else
            {
                printf("Invalid quantity.\n");
            }
        }
        else
        {
            printf("Invalid Item ID.\n");
        }

        printf("Add more items? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    subTotal = 0;
    for (i = 0; i < MENU_SIZE; i++)
    {
        subTotal += itemPrices[i] * orderQty[i];
    }

    if (subTotal > 300)
    {
        discount = subTotal * 0.10;
    }

    tax = (subTotal - discount) * 0.05;
    grandTotal = (subTotal - discount) + tax;

    printf("\nFinal Invoice\n");
    printf("-------------------------------\n");
    printf("%-20s %-10s %-10s\n", "Item", "Qty", "Total");

    for (i = 0; i < MENU_SIZE; i++)
    {
        if (orderQty[i] > 0)
        {
            itemTotal = itemPrices[i] * orderQty[i];
            printf("%-20s %-10d %.2f\n", itemNames[i], orderQty[i], itemTotal);
        }
    }

    printf("\nSubtotal: %.2f\n", subTotal);
    printf("Discount: %.2f\n", discount);
    printf("GST (5%%): %.2f\n", tax);
    printf("Grand Total: %.2f\n", grandTotal);

    return 0;
}
