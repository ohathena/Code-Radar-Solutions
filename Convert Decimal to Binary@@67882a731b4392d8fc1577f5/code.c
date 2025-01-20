#include <stdio.h>
#include<stdlib.h>

int main() {
    int a;
    scanf("%d" , &a );
    char b[33];
    int i =0;
    while(a>0){
        b[i]= a%2;
        a = a/2;
        i++;
    }
     for (int j =i-1; j >=0 ; j--){
        printf("%d" , b[j]);
     }

    return 0;
}