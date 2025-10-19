#include <stdio.h>

int main() {
    int seats[10] = {0}; 
    int sn;
    int sb = 0;

    printf("Welcome to the Bus Seat Booking System\n");


    while (sb < 5) {
        printf("\nEnter seat number to book (0-9): ");
        scanf("%d", &sn);

       
        if (sn < 0 || sn > 9) {
            printf("Invalid seat number. Please enter a number between 0 and 9.\n");
            continue;
        }

        
        if (seats[sn] == 0) {
            seats[snr] = 1; 
            sb++;
            printf("Seat %d booked successfully.\n", sn);
        } else {
            printf("Seat already booked.\n");
        }
    }


    printf("\nBooking complete. Final seat status:\n");
    for (int i = 0; i < 10; i++) {
        printf("Seat %d: %s\n", i, seats[i] == 1 ? "Booked" : "Empty");
    }

    return 0;
}

