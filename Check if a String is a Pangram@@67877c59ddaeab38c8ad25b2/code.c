#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    if (strchr(str, 'A') != NULL) {
        printf("Yes");
         return 0;
    } 

    if (strchr(str, 't') == NULL) {
        printf("No");
         return 0;
    } 
    // else if (strchr(str, 'c') == NULL) {
    //     printf("No");
    //      return 0;
    // } 
    else{
        printf("Yes");
    }
    return 0;
}