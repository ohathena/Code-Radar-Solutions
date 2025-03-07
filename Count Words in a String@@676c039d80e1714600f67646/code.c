#include <stdio.h>
#include <string.h>

int main(){
    char *str;
    int c =0;
    scanf("%[^/n]s" , str);
    int n = strlen(str);
    if(n==0){
        printf("0");
    }
    for(int i = 0; i<n ; i++){
        if(str[i]==' '){
            c++;
        }
    }
    printf("%d", c+1);
}
