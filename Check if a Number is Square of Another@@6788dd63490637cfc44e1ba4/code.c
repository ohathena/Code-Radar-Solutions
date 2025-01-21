#include <stdio.h>

int main() {
    int a , b;
    scanf("%d %d" , &a , &b);
    printf("%s", ((b*b) == a)? "Yes" : "No");
    return 0;
}