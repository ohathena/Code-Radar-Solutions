#include <stdio.h>

int main() {
    int a , b;
    scanf("%d %d" , &a , &b);
    if(a==b){
        printf("Equal")
    }
    else{
    printf("%s", (a>b)? "First" : "Second");
    }
    return 0;
}