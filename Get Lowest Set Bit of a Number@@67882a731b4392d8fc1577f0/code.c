#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    int r = a & -a;
    printf("%s", r);
    return 0;
}