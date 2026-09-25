#include <stdio.h>

int main() {
    int marks, attendance, income, marks_less_50, attendance_less_75, income_greater_800000;

    printf("\nEnter Marks: ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("\nEnter Marks again: ");
        scanf("%d", &marks);
    }
    else if (marks < 50) {
        marks_less_50 = 1;
    }
    else {
        marks_less_50 = 0;
    }

    printf("\nEnter Attendance Percentage: ");
    scanf("%d", &attendance);
    
    if (attendance < 0 || attendance > 100) {
        printf("\nEnter attendance again: ");
        scanf("%d", &attendance);
    }
    else if (attendance < 75) {
        attendance_less_75 = 1;
    }
    else {
        attendance_less_75 = 0;
    }
    
    printf("\nEnter family income: ");
    scanf("%d", &income);
    if (income > 800000) {
        income_greater_800000 = 1;
    }
    else {
        income_greater_800000 = 0;
    }

    switch (marks_less_50) {
        case 1:
            printf("\nMarks too low. Not Eligible!");
            break;
        case 0:
            switch (attendance_less_75) {
                case 1:
                    printf("\nAttendance too low. Not Eligible!");
                    break;
                case 0:
                    switch(income_greater_800000) {
                        case 1:
                            printf("\nIncome too high. Not Eligible!");
                            break;
                        case 0:
                            if (marks >= 90 && attendance >= 90) {
                                printf("\nFull Scholarship Granted!");
                            } else if (marks >= 75 && attendance >= 85) {
                                printf("\nHalf Scholarship Granted!");
                            }
                            else {
                                printf("\nQuarter Scholarship Granted!");
                            }
                            break;
                        break;
                        default:
                            printf("\nEnter valid income!");
                            break;
                    }
                    break;
                default:
                    printf("\nEnter valid attendance");
                    break;
            }
            break;
        default:
            printf("\nEnter valid marks");
            break;
    }

    return 0;

}