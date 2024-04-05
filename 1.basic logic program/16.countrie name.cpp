#include <stdio.h>

int main() {
    char fname[20], mname[20], lname[20]; /* country’s name */

    /* accept full name */
    printf("Enter full name (first middle last): ");
    scanf("%s %s %s", fname, mname, lname);

    /* print abbreviated name */
    printf("Abbreviated name: ");
    printf("%c. %c. %c\n", fname[0], mname[0], lname[0]);

    return 0;
}

