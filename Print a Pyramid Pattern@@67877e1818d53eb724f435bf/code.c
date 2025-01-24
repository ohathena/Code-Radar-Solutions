#include <stdio.h>
int main() {
    int a;
    char p[100];
    int index=0;
    scanf("%d" , &a);
    for(int i=0; i<a ; i++){
        for(int j=1; j<=(a-i); j++){
            p[index++]='';
        }

        for(int k=1; k<=(2*i-1); k++){
            p[index++]='*';
            }
            p[index++]='\n';
        p[index]='\0';
        printf("%s" , p);
    }
    return 0;
}