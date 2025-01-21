#include <stdio.h>

int main() {
    int a , b;
    float r;
    char ch;
    scanf("%d %d %c" , &a , &b , &ch);
    switch(ch){
        case '+':
        printf("%d" , a+b);
        break;
        case'-':
        printf("%d" , a-b);
        break;
        case '*':
        printf("%d" , a*b);
        break;
        case'/':
        r = (float)a/b;
        printf("%d" , (int)r);
        break;
        default:
        printf("Error");
    }
    return 0;
}