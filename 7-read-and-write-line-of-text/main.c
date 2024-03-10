#include <stdio.h>

int main() {
    // Declare an array to store the line of text
    char input_line[100];

    // Get a line of text from the user
    printf("Enter a line of text: ");
    fgets(input_line, sizeof(input_line), stdin);

    // Display the entered line of text
    printf("You entered: %s", input_line);

    return 0;
}

