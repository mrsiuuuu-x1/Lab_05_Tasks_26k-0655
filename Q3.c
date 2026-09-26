#include <stdio.h>

int main() {
    int age, oxygen, heart_rate;

    printf("\nEnter age: ");
    scanf("%d",&age);
    printf("\nEnter oxygen level: ");
    scanf("%d", &oxygen);
    printf("\nEnter heart rate: ");
    scanf("%d", &heart_rate);

    if (oxygen < 90) {
        printf("\nCritical: immediate attention!");
    } else if (heart_rate > 130 || heart_rate < 40) {
        printf("\nCritical: cardiac alert!");
    } else if (age >= 65 && oxygen < 95) {
        printf("\nHigh Priority!");
    } else if (age <= 5 && heart_rate > 110) {
        printf("\nHigh Priority!");
    } else if (oxygen < 97) {
        printf("\nMedium Priority!");
    }
    else {
        printf("\nLow Priority");
    }
    return 0;
    
}