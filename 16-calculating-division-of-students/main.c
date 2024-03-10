#include <stdio.h>

int main() {
    float percentage;

    printf("Enter the student's percentage: ");
    scanf("%f", &percentage);

		if(percentage > 100 || percentage < 0) {
			printf("Please provide valid input\n");
			return 1;
		}

    if (percentage >= 80) {
        printf("Division: Distinction\n");
    } else if (percentage >= 60) {
        printf("Division: First Division\n");
    } else if (percentage >= 40) {
        printf("Division: Second Division\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}

