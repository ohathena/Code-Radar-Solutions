#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    printf("%s", (a<=0)? "Freezing" : "Above Freezing");
    return 0;
}