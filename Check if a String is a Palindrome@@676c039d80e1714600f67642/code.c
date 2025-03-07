#include <stdio.h>
#include <string.h>
int main(){
    char *str = NULL;
    scanf("%ms" , &str);
    int n = strlen(str);
    char str2[n];
    for(int i = n-1 ; i>=0 ; i--){
        strcat(str2, str[i]);
    }
    if(str == str2){
        printf("Yes");
    }
    else{
        printf("No");
    }
}