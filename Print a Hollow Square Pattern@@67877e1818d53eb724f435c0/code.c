#include <stdio.h>
int main() {
    int a;
    scanf("%d" , &a);
    char o[100];
    int index=0;
    for(int i=0; i<a ; i++){
        for(int j=0; j<a ; j++){
            if(i==0 || i==(a-1) || j=0 || j==(a-1)){
              o[index++]= "*";
            }
           else {
               o[index++]=" ";
            }
       }
       o[index++]='\n';
    }
    o[index]='\0';
    //printf("%s" , o);

    return 0;
}