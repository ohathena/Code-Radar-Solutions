#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    printf("%s", (a<=0)? "Freezing" : "Not Freezing");
    return 0;
}