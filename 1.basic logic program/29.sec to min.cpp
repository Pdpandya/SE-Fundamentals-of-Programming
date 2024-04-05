#include <stdio.h>

int main() {
    int minutes, hours, seconds;

    // Accept number of minutes from the user
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    // Convert minutes into hours and seconds
    hours = minutes / 60;      
    seconds = minutes * 60;     

    // Display the  number of hours and seconds
    printf("Equivalent number of hours: %d\n", hours);
    printf("Equivalent number of seconds: %d\n", seconds);

    return 0;
}

