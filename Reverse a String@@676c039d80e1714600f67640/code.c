#include <stdio.h>
#include <stdlib.h>
int main(){
    char *str = NULL;
    scanf("%ms" , &str);
    int n = strlen(str);
    for(int i = n-1 ; i>=0 ; i--){
        printf("%c" , str[i]);
    }
    
}
