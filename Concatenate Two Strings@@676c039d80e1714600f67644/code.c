#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    char str1[100];
    fgets(str, sizeof(str) , stdin);
    int n = strlen(str);
    for(int i = 0; i<n ; i++){
        if(str[i]!=' '){
            str1[i]= str[i];
        }
    }

    printf("%s" , str1);
}