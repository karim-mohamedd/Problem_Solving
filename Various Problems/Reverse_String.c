#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end) {
        // Swap characters at start and end
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards middle
        start++;
        end--;
    }
}

int main() {
    char str[MAX_LENGTH];

    // Input string from user
    printf("Enter a string (max %d characters): ", MAX_LENGTH - 1);
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    size_t length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    // Reverse the string
    reverseString(str);

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
