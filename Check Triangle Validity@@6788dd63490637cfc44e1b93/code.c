#include <stdio.h>

int main() {
    int a , b, c;
    scanf("%d %d %d" , &a , &b , &c);

    printf("%s", (a+b>c && b+c>a && c+a>b)? "Valid" : "Invalid");
    return 0;
}