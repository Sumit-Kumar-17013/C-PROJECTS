// Canteen Billing System

#include <stdio.h>
#include <string.h>

int main()
{
    printf("\n---WELCOME TO FAMILY RESTAURANT---\n"); // MEnu DAta
    char *North_indian[] = {"Samosa", "Aalu Paratha", "Pav Bhaji", "Chole Bhature", "Palak Paneer"};
    float North_Price[] = {20.0, 45.0, 50.0, 80.0, 160};

    char *South_Indian[] = {"Idli-Sambar", "Dosa", "Vada", "Uttapam", "Kesari Bath"};
    float South_price[] = {60.0, 80.0, 40.0, 60.0, 70.0};

    char *thai_foods[] = {"Pad Thai", "Tom Yum Goong", "Green Curry", "Khao Pad", "Som Tam"};
    float Thai_price[] = {160.0, 280.0, 220.0, 100.0, 140.0};

    char *chinese_Foods[] = {"Hakka Noodles", "Fried Rice", "Manchurian", "Spring Roll", "Chili Chicken"};
    float chinese_Price[] = {120.0, 150.0, 160.0, 80.0, 280.0};

    char *Italian_Foods[] = {"Margherita Pizza", "Pasta Alfredo", "Lasagna", "Bruschetta", "Tiramisu"};
    float Italian_Price[] = {260.0, 120.0, 330.0, 190.0, 220.0};

    char *Drinks[] = {"Mineral Water", "Lemon-Water", "Coco-Cola", "Maaza", "fanta", "Cold-Coffee", "Dark-Coffee", "Tea"};
    float Drink_Price[] = {20.0, 35.0, 70.0, 60.0, 55.0, 120.0, 80.0, 25.0};

    // Storing The data which provided by user
    char OrderName[200][100];
    float FoodPrice[200];
    int OrderQty[200];

    int orderCount = 0;
    int MainChoise = -1;

    while (1)
    {
        printf("(:---'MAIN MENU'---:)\n\n");
        printf("1. North Indian Foods\n");
        printf("2. South Indian Foods\n");
        printf("3. Thai-Style Foods\n");
        printf("4. Chinese Foods\n");
        printf("5. Italian Foods\n");
        printf("6. Drinks\n");
        printf("7. Cash-Out / Billing\n");
        printf("0. EXIT / LEAVE\n");
        printf("__________________________\n");
        printf("Enter Your Choice = ");

        if (scanf("%d", &MainChoise) != 1) // addressing the Value
        {
            return 0;
        }
        if (MainChoise == 0) // exit Section
        {
            printf("Exit...:) !Thank You!\n");
            return 0;
        }
        if (MainChoise == 7) // billing Section
        {
            if (orderCount == 0)
            {
                printf("No Items  Orderd\n");
                continue;
            }

            // Billing The item
            printf("\n\n___________________'FINAL BILL'_____________________\n\n");
            printf("%-3s %-30s %-6s %-10s %-10s\n", "NO", "item", "Qty", "Price", "Amount");
            float SubTotal = 0;
            float Amount;
            for (int i = 0; i < orderCount; i++)
            {
                Amount = FoodPrice[i] * OrderQty[i];
                SubTotal = SubTotal + Amount;
                printf("%-3d %-30s %-6d %-10.2f %-10.2f\n", i + 1, OrderName[i], OrderQty[i], FoodPrice[i], Amount);
            }
            float Tax;
            Tax = SubTotal * 0.05; // implement 5% tax

            float Discount;
            if (SubTotal > 300) // Dis. after ₹300.
            {
                Discount = SubTotal * 0.10;
            }
            else
            {
                Discount = 0.0;
            }

            float GrandTotal;
            GrandTotal = SubTotal + Tax - Discount;

            // Printing All Calculation!

            printf("____________________________\n");
            printf("SubTotal = %.2f\n", SubTotal);
            printf("TaX = %.2f\n", Tax);
            printf("Discount = %.2f\n", Discount);
            printf("____________________________\n");
            printf("Grand Total = %.2f\n", GrandTotal);
            printf("____________________________\n");

            // its PayMent Method

            int Pay;
            printf("----Select Payment Method----\n");
            printf("1. Cash\n");
            printf("2. UPI\n");
            printf("3. Credit-Card\n");
            printf("Choose = ");
            scanf("%d", &Pay);
            if (Pay == 1)
            {
                printf("Cash\n");
            }
            else if (Pay == 2)
            {
                printf("UPI\n");
            }
            else if (Pay == 3)
            {
                printf("Credit-Card");
            }
            else
            {
                printf("Invalid Option(Taking Cash)\n");
            }

            printf("Please Collect Your Order!\n");
            printf("THANK-YOU\nVisit Again\n");

            orderCount = 0; // rest the oder menu
            continue;
        }

        // All Order Food handing item and repecting the all menu...upto 1 to 6

        char **items;
        float *Prices;
        int ItemCount;

        switch (MainChoise) // by switch method
        {
        case 1:
        {
            items = North_indian;
            Prices = North_Price;
            ItemCount = 5;
            break;
        }
        case 2:
        {
            items = South_Indian;
            Prices = South_price;
            ItemCount = 5;
            break;
        }
        case 3:
        {
            items = thai_foods;
            Prices = Thai_price;
            ItemCount = 5;
            break;
        }
        case 4:
        {
            items = chinese_Foods;
            Prices = chinese_Price;
            ItemCount = 5;
            break;
        }
        case 5:
        {
            items = Italian_Foods;
            Prices = Italian_Price;
            ItemCount = 5;
            break;
        }
        case 6:
        {
            items = Drinks;
            Prices = Drink_Price;
            ItemCount = 8;
            break;
        }
        default:
        {
            printf("Invalid Choise\n");
            continue;
        }
        }

        printf("__________________________\n");
        printf("Choose an Item = \n"); // choose item again and again
        for (int i = 0; i < ItemCount; i++)
        {
            printf("%d %s - Rs %.2f \n", i + 1, items[i], Prices[i]);
        }

        int id;
        printf("Enter Item Number = ");
        scanf("%d", &id);
        if (id < 1 || id > ItemCount)
        {
            printf("Invalid Item Id\n");
            continue;
        }

        int qty;
        printf("Enter Quantity = ");
        scanf("%d", &qty);

        // Storing Oder

        strcpy(OrderName[orderCount], items[id - 1]);
        FoodPrice[orderCount] = Prices[id - 1];
        OrderQty[orderCount] = qty;

        orderCount += 1;

        printf("Item Added SuccessFully\n");
    }
    return 0;
}