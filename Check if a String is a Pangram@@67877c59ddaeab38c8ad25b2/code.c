#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);

    if (strchr(str, 'a') != NULL) {
        printf("No");
         return 0;
    } 
    else{
        printf("Yes")
    }
    return 0;
}