#include <stdio.h>

int main() {
    int physics, chemistry, mathematics, total_marks, total_maths_physics;

    // Input marks obtained in Physics, Chemistry, and Mathematics
    printf("Input the marks obtained in Physics: ");
    scanf("%d", &physics);
    printf("Input the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);
    printf("Input the marks obtained in Mathematics: ");
    scanf("%d", &mathematics);

    // Input total marks in Maths, Physics, and Chemistry
    printf("Total marks in Maths, Physics, and Chemistry: ");
    scanf("%d", &total_marks);

    // Input total marks in Maths and Physics
    printf("Total marks in Maths and Physics: ");
    scanf("%d", &total_maths_physics);

    // Check eligibility criteria
    if (physics >= 55 && chemistry >= 50 && mathematics >= 65 && total_marks >= 190) {
        printf("The candidate is eligible.\n");
    } else if (total_maths_physics >= 140) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

