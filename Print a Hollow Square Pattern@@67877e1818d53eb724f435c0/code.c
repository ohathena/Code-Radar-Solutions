#include <stdio.h>
int main() {
    int a;
    scanf("%d" , &a);
   
    char star[1000];
    int index=0;
    
    for(int i=0; i<a ; i++){
        printf("hi");
    }/*
        for(int j=0; j<a ; j++){
            if(i==0 || i==a-1 || j=0 || j==a-1){
              star[index++]= '*';
            }
           else {
               star[index++]=' ';
            }
       }
       star[index++]='\n';
    } 
    star[index]='\0';
    printf("%s" , star); */
    return 0;
}