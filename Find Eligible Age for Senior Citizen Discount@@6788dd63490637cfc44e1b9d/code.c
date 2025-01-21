#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);

    printf("%s", (a>=60)? "Eligible" : "Not Eligible");
    return 0;
}