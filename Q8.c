#include <stdio.h>

#define READ 1
#define WRITE 2
#define EXECUTE 4

int main() {
    int permission;

    printf("\nEnter permission: ");
    scanf("%d", &permission);

    if (permission & EXECUTE) {
        printf("\nAccess granted: full control");
    } else if ((permission & READ) && (permission & WRITE)) {
        printf("\nAccess granted: read and write");
    } else if (permission == READ) {
        printf("\nAccess granted: read-only");
    }
    else {
        printf("\nAccess denied");
    }

    return 0;
    
}