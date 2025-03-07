#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    char str1[100];
    fgets(str, sizeof(str) , stdin);
    fgets(str1, sizeof(str) , stdin);
    strcat(str , str1);
    printf("%s" , str);
}