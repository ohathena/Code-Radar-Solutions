#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str) , stdin);
    int n = strlen(str);
    int c = 0;
    int b = 0;
    for(int i = 0 ; i<n-1 ; i++){
        for(int j = i+1 ; i<n ; i++){
            if(str[i]==str[j]){
                c++;
                break;
            }
           
        }
        if(c==0){
            b++;
            printf("%c" , str[i]);
        }
    }
    if(b==0){
         printf("-");
    }
}