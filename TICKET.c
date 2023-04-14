#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_SEATS 50

struct passenger {
    char name[50];
    char phone[20];
    int seat_no;
};

struct passenger passengers[MAX_SEATS];

int num_of_passengers = 0;

void print_menu() {
    printf("MENU\n");
    printf("1. Reserve a ticket\n");
    printf("2. Cancel a ticket\n");
    printf("3. Display passenger list\n");
    printf("4. Exit\n");
}

void reserve_ticket() {
    if (num_of_passengers >= MAX_SEATS) {
        printf("Sorry, all seats are already reserved.\n");
        return;
    }
    
    struct passenger p;
    printf("Enter name: ");
    scanf("%s", p.name);
    printf("Enter phone number: ");
    scanf("%s", p.phone);
    
    int seat_no;
    do {
        printf("Enter seat number (1-50): ");
        scanf("%d", &seat_no);
    } while (seat_no < 1 || seat_no > MAX_SEATS || passengers[seat_no-1].seat_no != 0);
    
    p.seat_no = seat_no;
    passengers[seat_no-1] = p;
    num_of_passengers++;
    
    printf("Ticket reserved successfully.\n");
}

void cancel_ticket() {
    if (num_of_passengers == 0) {
        printf("No tickets have been reserved yet.\n");
        return;
    }
    
    int seat_no;
    do {
        printf("Enter seat number to cancel (1-50): ");
        scanf("%d", &seat_no);
    } while (seat_no < 1 || seat_no > MAX_SEATS || passengers[seat_no-1].seat_no == 0);
    
    passengers[seat_no-1].seat_no = 0;
    num_of_passengers--;
    
    printf("Ticket cancelled successfully.\n");
}

void display_passenger_list() {
    if (num_of_passengers == 0) {
        printf("No tickets have been reserved yet.\n");
        return;
    }
    
    printf("Passenger List:\n");
    printf("Seat No.\tName\t\tPhone\n");
    for (int i=0; i<MAX_SEATS; i++) {
        if (passengers[i].seat_no != 0) {
            printf("%d\t\t%s\t\t%s\n", passengers[i].seat_no, passengers[i].name, passengers[i].phone);
        }
    }
}

int main() {
    int choice;
    
    do {
        print_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                reserve_ticket();
                break;
            case 2:
                cancel_ticket();
                break;
            case 3:
                display_passenger_list();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}