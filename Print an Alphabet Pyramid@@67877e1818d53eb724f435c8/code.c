#include <stdio.h>

int main() {
    int n;
    scanf("%d" , &n);
    for(int i=0 ; i<n ; i++){
        int c =65;
        for(int j=0 ; j<n ;j++){
            printf("%c " , (char)c );
        }
        printf("\n");
    }
    
    return 0;
}