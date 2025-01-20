#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d %d" , &a , &b);
    if(!(a==b)){
    printf("%s", (a<b)? "Profit" : "Loss");}
    else{
        printf("No Profit No Loss");
    }
    return 0;
}