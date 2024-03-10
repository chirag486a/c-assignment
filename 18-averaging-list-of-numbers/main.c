#include <stdio.h>

int main() {
    int numNumbers;
    float total = 0;

    printf("Enter the number of values: ");
    scanf("%d", &numNumbers);

		if(!(numNumbers > 0)) {
			printf("Cannot calculate average with 0 or less values.\n");
			return 1;
		}

    for (int i = 1; i <= numNumbers; i++) {
        float currentValue;
        printf("Enter value %d: ", i);
        scanf("%f", &currentValue);

        total += currentValue;
    }

    // Calculate and display the average
    float average = total / numNumbers;
    printf("Average: %.2f\n", average);

    return 0;
}

