#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d" ,a);
    scanf("%d" , b);
    scanf("%d" , c);
    float av = (a+b+c)/3;
    printf("Average: %.2f", av);
    return 0;
}