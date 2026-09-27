#include <stdio.h>

int main() {
    int category, sub_type, order;

    printf("\nEnter category: ");
    printf("\n1. Greeting");
    printf("\n2. Query");
    printf("\n3. Complaint");
    printf("\n4. Feedback\n");
    scanf("%d", &category);

    switch(category) {
        case 1:
            printf("\nEnter category: ");
            printf("\n1. Morning");
            printf("\n2. Evening\n");
            scanf("%d", &sub_type);

            switch(sub_type) {
                case 1:
                    printf("\nGood Morning");
                    break;
                case 2:
                    printf("\nGood Evening");
                    break;
                default:
                    printf("\nEnter a valid choice");
                    break;
            }
            break;
        case 2:
            printf("\nEnter category: ");
            printf("\n1. Product");
            printf("\n2. Billing");
            printf("\n3. Technical\n");
            scanf("%d", &sub_type);

            switch(sub_type) {
                case 1:
                    printf("\nWhat's your issue?");
                    break;
                case 2:
                    printf("\nWhat's your issue?");
                    break;
                case 3:
                    printf("\nWhat's your issue?");
                    break;
                default:
                    printf("\nEnter a valid choice");
                    break;
            }
            break;
        case 3:
            printf("\nEnter category: ");
            printf("\n1. Delivery");
            printf("\n2. Quality\n");
            scanf("%d", &sub_type);

            switch(sub_type) {
                case 1:
                    printf("\nIs the order delayed? ");
                    scanf("%d", &order);

                    switch(order) {
                        case 0:
                            printf("\nWhat's your issue? ");
                            break;
                        case 1:
                            printf("\nWe are sorry for inconvenience");
                            break;
                        default:
                            printf("\nEnter a valid choice");
                            break;
                    }
                    break;
                case 2:
                    printf("\nWhat's your issue?");
                    break;
                default:
                    printf("\nEnter a valid choice");
                    break;
            }
            break;
        case 4:
            printf("\nEnter category: ");
            printf("\n1. Positive");
            printf("\n2. Negative\n");
            scanf("%d", &sub_type);

            switch(sub_type) {
                case 1:
                    printf("\nThank You for positive feedback");
                    break;
                case 2:
                    printf("\nWe'll improve, Thank You!");
                    break;
                default:
                    printf("\nEnter a valid choice");
                    break;
            }
            break;
        default:
            printf("\nEnter a valid choice");
            break;
    }

    return 0;

}