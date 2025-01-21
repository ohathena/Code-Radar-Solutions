#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%s", (a>=1 && a<=100)? "In Range" : "Out of Range");
    return 0;
}