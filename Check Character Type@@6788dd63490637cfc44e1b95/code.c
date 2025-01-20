#include <stdio.h>

int main() {
    char ch;
    scanf("%c" , &ch);
    if(isdigit(ch)){
        printf("Digit");
    }
    else if(ch==a || ch==e ||ch==i || ch==o || ch==u){
        printf("Vowel");
    }
    else if(isalpha(ch)){
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
    return 0;
}