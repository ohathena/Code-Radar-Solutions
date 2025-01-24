#include <stdio.h>
int main() {
    int a;
    scanf("%d" , &a);
    char s[100];
    int index=0;
    for(int i=0; i<a ; i++){
        for(int j=0; j<a ; j++){
            if(i==0 || i==(a-1) || j=0 || j==(a-1)){
              s[index++]= "*";
            }
           else {
               s[index++]= ' ';
            }
       }
       s[index++]='\n';
    }
    s[index]='\0';
    printf("%s" , s);

    return 0;
}