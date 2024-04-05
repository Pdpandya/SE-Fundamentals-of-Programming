#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    // Input angles from the user
    printf("Enter the first angle: ");
    scanf("%f", &angle1);
    printf("Enter the second angle: ");
    scanf("%f", &angle2);
    printf("Enter the third angle: ");
    scanf("%f", &angle3);

    // Check if the sum of angles is equal to 180
    if (angle1 + angle2 + angle3 == 180)
        printf("Triangle can be formed with the given angles.\n");
    else
        printf("Triangle cannot be formed with the given angles.\n");

    return 0;
}

