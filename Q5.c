#include <stdio.h>

int main() {
    int time, motion, light, room, exhaust;

    printf("\nEnter time(0-23): ");
    scanf("%d", &time);

    if (time < 0 || time > 23) {
        printf("\nEnter time again: ");
        scanf("%d", &time);
    }

    printf("\nEnter motion(1/0): ");
    scanf("%d", &motion);

    printf("\nEnter light(0-100): ");
    scanf("%d", &light);
    
    if (light < 0 || light > 100) {
        printf("\nEnter light again: ");
        scanf("%d", &light);
    }

    printf("\nSelect room: ");
    printf("\n1. Living Room");
    printf("\n2. Bedroom");
    printf("\n3. Kitchen\n");
    scanf("%d", &room);

    switch(motion) {
        case 0:
            printf("\nAway mode: all OFF");
            break;
        case 1:
            switch(room) {
                case 1:
                    if (time >= 6 && time <= 18) {
                        printf("\nDay mode: lights ON");
                    } else if (time >= 18 && time <= 23) {
                        printf("\nEvening mode: dim lights");
                    }
                    else {
                        printf("\nNight mode: lights OFF");
                    }
                    break;
                case 2:
                    if (time >= 6 && time <= 18) {
                        printf("\nDay mode: lights ON");
                    } else if (time >= 18 && time <= 23) {
                        printf("\nEvening mode: dim lights");
                    }
                    else {
                        printf("\nNight mode: lights OFF");
                    }
                    break;
                case 3:
                    printf("\nAre you cooking?(1/0) ");
                    scanf("%d", &exhaust);
                    switch(exhaust) {
                        case 0:
                            if (time >= 6 && time <= 18) {
                                printf("\nDay mode: lights ON");
                            } else if (time >= 18 && time <= 23) {
                                printf("\nEvening mode: dim lights");
                            }
                            else {
                                printf("\nNight mode: lights OFF");
                            }
                            break;
                        case 1:
                            if (time >= 6 && time <= 18) {
                                printf("\nDay mode: lights ON");
                            } else if (time >= 18 && time <= 23) {
                                printf("\nEvening mode: dim lights");
                            }
                            else {
                                printf("\nNight mode: lights OFF");
                            }
                            printf("\nExhaust fan open!");
                            break;
                        default:
                            printf("\nEnter valid choice");
                            break;
                    }
                    break;
                default:
                    printf("\nEnter valid choice");
                    break;   
            }
            break;
        default:
            printf("\nEnter valid choice");
            break;
    }

    return 0;

}