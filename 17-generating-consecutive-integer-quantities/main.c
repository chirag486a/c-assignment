#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the starting value: ");
    scanf("%d", &start);

    printf("Enter the ending value: ");
    scanf("%d", &end);

    printf("Consecutive integers from %d to %d:\n", start, end);

    for (int i = start; i <= end; i++) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

