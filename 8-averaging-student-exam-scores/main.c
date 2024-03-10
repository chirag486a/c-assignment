#include <stdio.h>

int main() {

    int numSubjects = 8;
    float totalScore = 0;

    for (int i = 1; i <= numSubjects; i++) {
        float subjectScore;
        printf("Enter exam score for subject %d: ", i);
        scanf("%f", &subjectScore);

        totalScore += subjectScore;
    }

    float averageScore = totalScore / numSubjects;

    printf("Average exam score: %.2f\n", averageScore);

    return 0;
}

