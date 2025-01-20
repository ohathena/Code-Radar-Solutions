#include <stdio.h>

int main() {
    int a , b ,c;
    scanf("%d %d %d", &a , &b , &c);
    int max = (a>b)? a: b;
    printf("%d", (max>c)? max : c));
    return 0;
}