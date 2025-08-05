#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("BIG DISCOUNT CAMPAIGN!\n"
           "Buy 60 or more books → 20%% discount\n"
           "Buy 30 or more books → 15%% discount\n"
           "Buy 15 or more books → 10%% discount\n\n");

    int book_count, total_price, unit_price, price_before_discount;
    float discount_rate = 0.0, discount_amount, final_price;

    unit_price = 30;

    printf("Enter the number of books you want to buy: ");
    scanf("%d", &book_count);

    if (book_count >= 60) {
        discount_rate = 0.20;
    } else if (book_count >= 30) {
        discount_rate = 0.15;
    } else if (book_count >= 15) {
        discount_rate = 0.10;
    }

    price_before_discount = unit_price * book_count;

    printf("Total price before discount: %d\n", price_before_discount);
    printf("Applicable discount rate: %.2f\n", discount_rate);

    discount_amount = price_before_discount * discount_rate;
    printf("Total discount amount: %.2f\n", discount_amount);

    final_price = price_before_discount - discount_amount;
    printf("Total amount to pay: %.2f\n", final_price);

    return 0;
}
