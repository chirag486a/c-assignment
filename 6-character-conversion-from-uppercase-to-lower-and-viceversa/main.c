#include <stdio.h>

int main() {
    char input_string[100];

    printf("Enter a string: ");
		fgets(input_string, sizeof(input_string), stdin);

    for (int i = 0; input_string[i] != '\0'; i++) {
        if (input_string[i] >= 'A' && input_string[i] <= 'Z') {
            input_string[i] = input_string[i] + 32;
        }
        else if (input_string[i] >= 'a' && input_string[i] <= 'z') {
            input_string[i] = input_string[i] - 32;
        }
    }
    printf("String with reversed case: %s\n", input_string);

    return 0;
}

