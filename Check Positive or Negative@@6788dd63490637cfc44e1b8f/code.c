#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    if(a==0){
        printf("Zer0");
    }
    else{
    printf("%s", (a>0)? "Positive" : "Negative");}
    return 0;
}