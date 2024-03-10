#include <stdio.h>

int main() {
    float salary, bonus = 0;

    printf("Enter the salary: ");
    scanf("%f", &salary);

    if (salary > 5000) {
        bonus = 0.02 * salary; // 2% bonus for salary greater than 3000
    } else if (salary > 3000) {
        bonus = 0.05 * salary; // 5% bonus for salary between 3000 and 5000
    } else {
        bonus = 0.1 * salary;  // 10% bonus for salary less than equal to 3000
    }

    printf("Bonus: %.2f\n", bonus);

    return 0;
}

