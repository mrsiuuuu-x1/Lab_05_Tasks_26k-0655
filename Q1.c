#include <stdio.h>

int main() {
    int vehicle, hours, membership;
    int base_fee;
    float discount, final_fee;

    printf("Enter vehicle type(1. Bike, 2. Car, 3. Truck): \n");
    scanf("%d", &vehicle);
    printf("\nEnter Duration: ");
    scanf("%d", &hours);
    printf("\nEnter Membership status: ");
    scanf("%d", &membership);
    
    if (hours <= 0) {
        printf("Please Try again");
    }

    switch(vehicle) {
        case 1:

            base_fee = 20 * hours;

            break;
        case 2:

            if (hours <= 2) {
                base_fee = 50;
            }
            else {
                base_fee = 50 + 30 * (hours - 2);
            }
            
            break;
        case 3:
            
            if (hours <= 3) {
                base_fee = 100;
            }
            else {
                base_fee = 100 + 50 * (hours - 3);
            }
            break;
        default:
            printf("\nEnter a valid choice");
    }
    
    if (membership == 1 && base_fee > 200) {
        discount = base_fee * 0.15;
        final_fee = base_fee - discount;
        printf("Your total fee will be: $%.2f", final_fee);
    }
    else {
        printf("Your total fee will be: $%.2f", final_fee);
    }
}