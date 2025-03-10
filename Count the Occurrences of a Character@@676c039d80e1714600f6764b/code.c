#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char d;

    // Input string using fgets (reads the entire line)
    fgets(str1, sizeof(str1), stdin);
    
    // Remove the newline character if present
    str1[strcspn(str1, "\n")] = '\0';

    // Input the character
    scanf("%c", &d);

    int c = 0;
    
    // Count occurrences of 'd' in the string
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == d) {
            c++;
        }
    }

    printf("%d\n", c);
    return 0;
}
