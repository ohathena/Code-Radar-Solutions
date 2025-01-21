#include <stdio.h>

int main() {
    int a , b;
    scanf("%d %d" , &a , &b);

    printf("%s", (b%a==0)? "Yes" : "No");
    return 0;
}