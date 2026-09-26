#include <stdio.h>

int main() {
    int card, pin, balance, amount, new_balance, notes2000, notes500, notes100, remaining;

    printf("\nEnter card status(1,0): ");
    scanf("%d", &card);
    printf("\nEnter PIN(1,0): ");
    scanf("%d", &pin);
    printf("\nEnter Account Balance: ");
    scanf("%d", &balance);
    printf("\nEnter Withdrawal Amount: ");
    scanf("%d", &amount);

    switch (card) {
        case 0:
            printf("\nCard Blocked. Please contact Bank!");
            break;
        case 1:
            switch(pin) {
                case 0:
                    printf("\nInvalid PIN!");
                    break;
                case 1:
                    if (amount <= 0) {
                        printf("\nInvalid amount");
                        break;
                    } else if (amount > balance) {
                        printf("\nInsufficient Balance");
                        break;
                    } else if (amount > 25000) {
                        printf("\nDaily Limit Exceeded");
                        break;
                    } else if ((balance - amount) < 1000) {
                        printf("\nMinimum balance must be maintained");
                    }
                    else {
                        new_balance = balance - amount;
                        notes2000 = amount / 2000;
                        remaining = amount % 2000;
                        notes500 = remaining / 500;
                        remaining = remaining % 500;
                        notes100 = remaining / 100;
                        remaining = remaining % 100;

                        printf("\n2000 notes: %d", notes2000);
                        printf("\n500 notes: %d", notes500);
                        printf("\n100 notes: %d", notes100);
                    }
                    break;
                default:
                    printf("\nEnter valid number");
                    break;
            }
            break;
        default:
            printf("\nEnter valid choice");
            break;
    }
}