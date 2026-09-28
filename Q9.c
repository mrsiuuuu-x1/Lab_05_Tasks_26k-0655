#include <stdio.h>

#define READ 1
#define WRITE 2
#define EXECUTE 4
#define DELETE 8
#define ADMIN 16

int main() {
    int permission;

    printf("\nEnter permission: ");
    scanf("%d", &permission);

    if (permission & ADMIN) {
        printf("\nFull access: admin");
    } 
    else if ((permission & DELETE) && (permission & WRITE)) {
        printf("\nAccess: delete and write");
    } 
    else if ((permission & EXECUTE) && !(permission & WRITE)) {
        printf("\nAccess: execute only");
    } 
    else if ((permission & READ) && !(permission & WRITE) && !(permission & EXECUTE)) {
        printf("\nAccess: read-only");
    } 
    else if (!(permission & (READ | WRITE | EXECUTE | DELETE | ADMIN))) {
        printf("\nAccess denied");
    } 
    else {
        printf("\nAccess: custom permissions");
    }

    printf("\nDetected bits: ");
    if (permission & READ) printf("READ ");
    if (permission & WRITE) printf("WRITE ");
    if (permission & EXECUTE) printf("EXECUTE ");
    if (permission & DELETE) printf("DELETE ");
    if (permission & ADMIN) printf("ADMIN ");

    return 0;
    
}