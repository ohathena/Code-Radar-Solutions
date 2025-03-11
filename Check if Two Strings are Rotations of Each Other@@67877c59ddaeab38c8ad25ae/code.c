#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char temp[100];

    scanf("%s", str1);
    scanf("%s", str2);

    int n = strlen(str1);
    int c = 0; 

    // Reverse str1 into temp
    for (int i = n - 1; i >= 0; i--) {
        temp[c] = str1[i];
        c++;
    }
    temp[c] = '\0';  // Null-terminate the reversed string

    // Compare reversed str1 with str2
    if (strcmp(temp, str2) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
