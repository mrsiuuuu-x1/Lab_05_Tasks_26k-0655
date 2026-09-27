#include <stdio.h>

int main() {

    int stream, interest, medicine;

    printf("\nEnter Stream: ");
    printf("\n1. Science");
    printf("\n2. Commerce");
    printf("\n3. Arts\n");
    scanf("%d", &stream);

    switch (stream) {

        case 1:
            printf("\nEnter Interest: ");
            printf("\n1. Biology");
            printf("\n2. Physics");
            printf("\n3. Chemistry\n");
            scanf("%d", &interest);

            switch (interest) {

                case 1:
                    printf("\nAre you interested in medicine?");
                    printf("\n1. Yes");
                    printf("\n0. No\n");
                    scanf("%d", &medicine);

                    switch (medicine) {
                        case 1:
                            printf("Recommended course: MBBS");
                            break;

                        case 0:
                            printf("Recommended course: Biotechnology");
                            break;

                        default:
                            printf("Invalid choice.");
                    }
                    break;

                case 2:
                    printf("Recommended course: Physics");
                    break;

                case 3:
                    printf("Recommended course: Chemistry");
                    break;

                default:
                    printf("Invalid choice.");
            }
            break;

        case 2:
            printf("\nEnter Interest: ");
            printf("\n1. Accounting");
            printf("\n2. Marketing\n");
            scanf("%d", &interest);

            switch (interest) {

                case 1:
                    printf("Recommended course: Accounting");
                    break;

                case 2:
                    printf("Recommended course: Marketing");
                    break;

                default:
                    printf("Invalid choice.");
            }
            break;

        case 3:
            printf("\nEnter Interest: ");
            printf("\n1. Literature");
            printf("\n2. History");
            printf("\n3. Psychology\n");
            scanf("%d", &interest);

            switch (interest) {

                case 1:
                    printf("Recommended course: Literature");
                    break;

                case 2:
                    printf("Recommended course: History");
                    break;

                case 3:
                    printf("Recommended course: Psychology");
                    break;

                default:
                    printf("Invalid choice.");
            }
            break;

        default:
            printf("Invalid choice.");
    }

    return 0;
}