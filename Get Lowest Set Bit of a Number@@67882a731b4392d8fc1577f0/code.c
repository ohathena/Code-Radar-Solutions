#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    int r = a & (-a);
    printf("%d", r);
    return 0;
}