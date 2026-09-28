#include <stdio.h>

#define TRAINED 1
#define VALIDATED 2
#define APPROVED 4
#define DEPRECATED 8

int main() {
    float acc, conf, score;
    int size, role, status;

    printf("Enter accuracy (0-100): ");
    scanf("%f", &acc);
    
    printf("Enter confidence score (0-100): ");
    scanf("%f", &conf);
    
    printf("Enter dataset size: ");
    scanf("%d", &size);
    
    printf("Enter user role (1=Intern, 2=Engineer, 3=Admin): ");
    scanf("%d", &role);
    
    printf("Enter status flags: ");
    scanf("%d", &status);

    score = (acc * 0.5) + (conf * 0.3) + ((size / 1000.0) * 0.2);
    
    printf("\nModel Score: %.2f\n", score);

    if (status & DEPRECATED) {
        printf("Decision: Rejected: model deprecated\n");
    } 
    else if (!(status & TRAINED)) {
        printf("Decision: Rejected: not trained\n");
    } 
    else if (!(status & VALIDATED)) {
        printf("Decision: Rejected: not validated\n");
    } 
    else if (!(status & APPROVED)) {
        printf("Decision: Pending: awaiting approval\n");
    } 
    else if (acc < 70 || conf < 60) {
        printf("Decision: Rejected: performance too low\n");
    } 
    else if (size < 5000) {
        printf("Decision: Rejected: dataset too small\n");
    } 
    else if (role == 1) {
        printf("Decision: Denied: interns cannot deploy\n");
    } 
    else if (role == 2 && score < 80) {
        printf("Decision: Denied: engineer needs higher score\n");
    } 
    else {
        printf("Decision: Approved for deployment\n");
    }

    printf("\nDetected bits: ");
    if (status & TRAINED) printf("TRAINED ");
    if (status & VALIDATED) printf("VALIDATED ");
    if (status & APPROVED) printf("APPROVED ");
    if (status & DEPRECATED) printf("DEPRECATED ");
    printf("\n");

    float avg = (acc + conf) / 2.0;
    if (score > avg) {
        printf("The model score (%.2f) is above the average (%.2f).\n", score, avg);
    } else {
        printf("The model score (%.2f) is not above the average (%.2f).\n", score, avg);
    }

    return 0;
}