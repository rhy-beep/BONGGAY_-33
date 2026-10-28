#include <stdio.h>

int main (){
    int passengers, distance;
    int fare, totalFare = 0;
    int moreThan3Km = 0;
     
    printf(" enter number of passengers: ");
    scanf("%d", &passengers);

    for (int i= 1; i <= passengers; i++) {
        printf("enter distance for passenger %d (km): ", i);
        scanf("%d", &distance);

        while (distance < 1) {
            printf("invalid distance. enter at least 1 km: ");
            scanf("%d", &distance);
        }

        if (distance <= 3){
            fare = 20;
        } else {
            fare = 20  + (distance - 3) * 5;
            moreThan3Km++;
        }

        printf("fare: P%d\n", fare);

        totalFare += fare;
    }
    printf("\nTotal fare collected: P%d\n", totalFare);
    printf("passengers traveling more than 3 km: %d\n",
        moreThan3Km);

     return 0;
}
