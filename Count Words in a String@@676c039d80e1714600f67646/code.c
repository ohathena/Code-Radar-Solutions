#include <stdio.h>
#include <string.h>

int main() {
    char str[100];  // Allocate memory for input
    int c = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  // Reads the full line, including spaces

    int n = strlen(str);

    // If the string is empty or just a newline, print 0 words
    if (n == 0 || (n == 1 && str[0] == '\n')) {
        printf("0\n");
        return 0;
    }

    // Remove trailing newline if present
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    // Count words
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            c++;
        }
    }

    // If the first character is not a space, we count the first word
    if (str[0] != ' ') {
        c++;
    }

    printf("%d\n", c);  // Print word count
    return 0;
}

