#include <stdio.h>

int main() {
    int numCategories;
    float totalExpenses = 0;

    printf("Enter the number of expense categories: ");
    scanf("%d", &numCategories);

    for (int i = 1; i <= numCategories; i++) {
        float categoryExpense;
        printf("Enter expense for category %d: ", i);
        scanf("%f", &categoryExpense);

        totalExpenses += categoryExpense;
    }

    printf("Total Expenses: %.2f\n", totalExpenses);

    return 0;
}

