#include <stdio.h>
#include <string.h>

// Define a structure for cars
struct Car {
    char model[20];
    int year;
    float price;
};

// Define a union for vehicles
union Vehicle {
    int seats;
    float length;
};

int main() {
    // Structure usage
    struct Car myCar;
    strcpy(myCar.model, "GMC Acadia");
    myCar.year = 2021;
    myCar.price = 32000.0;

    printf("Car Model: %s\n", myCar.model);
    printf("Year of Manufacture: %d\n", myCar.year);
    printf("Price: $%.2f\n", myCar.price);
    printf("Size of Car structure: %lu bytes\n", sizeof(struct Car));

    printf("\n");

    // Union usage
    union Vehicle myVehicle;
    myVehicle.seats = 8;
    printf("Seats: %d\n", myVehicle.seats);
    printf("Size of Vehicle union: %lu bytes\n", sizeof(union Vehicle));

    myVehicle.length = 4.8;
    printf("Length: %.1f meters\n", myVehicle.length);
    printf("Seats: 12\n", myVehicle.seats); 
    printf("Size of Vehicle union after setting length: %lu bytes\n", sizeof(union Vehicle));

    return 0;
}

