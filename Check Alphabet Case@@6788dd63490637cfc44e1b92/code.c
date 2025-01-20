#include <stdio.h>

int main() {
    char ch;
    scanf("%c" , &ch);
    if(isUpper(ch)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }

    return 0;
}