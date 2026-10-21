#include <stdio.h>

int main() {

    float m1, m2, m3, percentage;

    printf("Enter marks for 3 subjects: ");

    scanf("%f %f %f", &m1, &m2, &m3);

    percentage = (m1 + m2 + m3) / 3;

    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 90)

        printf("Grade: A\n");

    else if (percentage >= 75)

        printf("Grade: B\n");

    else if (percentage >= 60)

        printf("Grade: C\n");

    else if (percentage >= 40)

        printf("Grade: D\n");

    else

        printf("Grade: F\n");

    return 0;

}
