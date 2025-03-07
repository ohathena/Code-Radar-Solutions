#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%[^/n]" , str);
    int n = strlen(str);
    printf("%d" , n);
}