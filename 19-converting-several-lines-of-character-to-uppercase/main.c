#include <stdio.h>
#include <string.h>

int main() {
    // Declare variables
    char inputLine[100];

    // Get user input for multiple lines of characters
    printf("Enter multiple lines of characters (type 'exit' to end):\n");

    // Continue reading lines until 'exit' is entered
    while (1) {
        // Read a line of characters
        fgets(inputLine, sizeof(inputLine), stdin);

        // Check if the user wants to exit
        if (strncmp(inputLine, "exit", 4) == 0) {
            break;
        }

        // Convert the line to uppercase
        for (int i = 0; inputLine[i] != '\0'; i++) {
            // Check if the character is a lowercase letter
            if (inputLine[i] >= 'a' && inputLine[i] <= 'z') {
                inputLine[i] = inputLine[i] - 32;
            }
        }

        // Print the line in uppercase
        printf("Uppercase: %s", inputLine);
    }

    return 0;
}

