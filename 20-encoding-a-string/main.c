//	20) ENCODING A STRING OF CHARACTER
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    int len = strlen(str);
    
    printf("String: %s\n", str);
    printf("ASCII values: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", str[i]);
    }
    printf("\n");
    
    return 0;
}
