#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    fgets(str , sizeof(str) , stdin);
    int n = strlen(str);
    char str2[n+1];
    for(int i = 0 ; i<n ; i++){
       str2[i]= str[n-1-i];
    }
    if(strcmp(str , str2)==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
}