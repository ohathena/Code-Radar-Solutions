#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main(){
    char str[100];
    fgets(str, sizeof(str) , stdin);
    int n = strlen(str);
     char s[100];
    for(int i = 0 ; i<n ; i++){
        char ch= str[i];
        if(ch < 96){
          s+= toupper(ch);
        }
        else{
            s+= tolower(ch); 
        }
    }
    printf("%s" , s);
}