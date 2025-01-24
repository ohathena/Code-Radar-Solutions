#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    for(int i=0; i<a ; i++){
        for(int j=i; j<a ; j++){
            print(" ");
        }
        for(int k=0; k<(2*i-1); k++){
            printf("*");
        }
        print("\n");
    }
    return 0;
}