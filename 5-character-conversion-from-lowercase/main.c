//	5) Character conversion from lowercase
#include <stdio.h>

int main() {
    char input_string[100];

    printf("Enter a string in lowercase: ");
    scanf("%s", input_string);
		
    for (int i = 0; input_string[i] != '\0'; i++) {
        if (input_string[i] >= 'a' && input_string[i] <= 'z') {
            input_string[i] = input_string[i] - 32;
        }
    }

    printf("Uppercase equivalent: %s\n", input_string);

    return 0;
}

