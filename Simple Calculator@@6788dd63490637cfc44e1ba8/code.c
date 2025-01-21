#include <stdio.h>

int main() {
    int a , b , r;
    char ch;
    scanf("%d %d %c" , &a , &b , &ch);
    if(ch=='+'){
        r= a+b;
    }
    else if(ch=='-'){
        r=a-b;
    }
    else if(ch=='*'){
        r=a*b;
    }
    else{
        r=a/b;
    }
    printf("%d", r);
    return 0;
}