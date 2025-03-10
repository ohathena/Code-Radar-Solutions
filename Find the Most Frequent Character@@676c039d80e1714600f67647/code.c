#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    fgets(str, sizeof(str), stdin); 
    int n = strlen(str);
    int c = 1;
    int max = 0;
    char final;
    for(int i = 0 ; i<n-1 ; i++){
        char ch = str[i];
        for(int j = i+1 ; j<n ; j++){
            if(str[j]==ch){
                c++;
            }        }
            if(c>max){
                max = c;
                final = ch;
                c= 0;
            }
    }
    if(c==1){
        printf("%c" , str[n-1]) ;
        return 0;
    }
    else{
         printf("%c" , final) ;
    }
    
}