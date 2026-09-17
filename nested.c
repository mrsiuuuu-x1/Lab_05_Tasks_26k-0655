/*
#include <stdio.h>

int main() {
    int pin, user_pin, amount, remaining;
    char answer;

    pin = 1234;

    printf("Enter pin: ");
    scanf("%d", &user_pin);

    if (user_pin == pin) {
        printf("\nEnter money: ");
        scanf("%d", &amount);

        if (amount <= 50000) {
            printf("Processing...");
            printf("\nDo you want a receipt? ");
            scanf(" %c", &answer);

            if (answer == 'Y' || answer == 'y') {
                remaining = 50000 - amount;
                printf("Your remaining amount: $%d", remaining);
            }
            else {
                printf("Thank you for your transaction");
            }
        }
        else {
            printf("Aukat ke andr pese daal rena baba");
        }
    }
    else {
        printf("\nEnter a valid pin");
    }

}

#include <stdio.h>

int main() {
    int department, specialization, subjects;

    printf("Which department you chose? (1. Engineering, 2. Medicine, 3. Business): \n");
    scanf("%d", &department);

    switch(department) {

        case 1:
            printf("Choose Specialization: (1. CS, 2. AI, 3. DS): \n");
            scanf("%d", &specialization);

            switch(specialization) {

                case 1:
                    printf("Choose subjects: (1. Data Structures, 2. OOP, 3. Problem Solving):\n");
                    scanf("%d", &subjects);
                    break;

                case 2:
                    printf("Choose subjects: (1. Reinforcement Learning, 2. Learning, 3. Dijkstra's Algorithm):\n");
                    scanf("%d", &subjects);
                    break;

                case 3:
                    printf("Choose subjects: (1. TensorFlow, 2. Matplotlib, 3. Pandas):\n");
                    scanf("%d", &subjects);
                    break;

                default:
                    printf("Enter a valid choice");
            }
            break;


        case 2:
            printf("Choose Specialization: (1. Nurse, 2. Doctor, 3. Physiotherapist): \n");
            scanf("%d", &specialization);

            switch(specialization) {

                case 1:
                    printf("Choose subjects: (1. Medicine, 2. Bio, 3. Knee):\n");
                    scanf("%d", &subjects);
                    break;

                case 2:
                    printf("Choose subjects: (1. Brain, 2. Lungs, 3. Heart):\n");
                    scanf("%d", &subjects);
                    break;

                case 3:
                    printf("Choose subjects: (1. Joints, 2. Surgical, 3. Oral Surgery):\n");
                    scanf("%d", &subjects);
                    break;

                default:
                    printf("Enter a valid choice");
            }
            break;


        case 3:
            printf("Choose Specialization: (1. Fintech, 2. Accounts, 3. Business): \n");
            scanf("%d", &specialization);

            switch(specialization) {

                case 1:
                    printf("Choose subjects: (1. Accounting, 2. Human Resources, 3. Business Law):\n");
                    scanf("%d", &subjects);
                    break;

                case 2:
                    printf("Choose subjects: (1. Product Management, 2. Management, 3. Marketing): \n");
                    scanf("%d", &subjects);
                    break;

                case 3:
                    printf("Choose subjects: (1. Sales, 2. Brand Management, 3. Digital Marketing):\n");
                    scanf("%d", &subjects);
                    break;

                default:
                    printf("Enter a valid choice");
            }
            break;


        default:
            printf("Enter a valid choice");
    }

}

#include <stdio.h>

int main() {
    int a, b, c;

    a = 3;
    b = 4;

    printf("%d\n", ++a);
    b++;
    c = b;
    printf("%d\n", c);
    printf("%d\n", b);

    return 0;
}
*/

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