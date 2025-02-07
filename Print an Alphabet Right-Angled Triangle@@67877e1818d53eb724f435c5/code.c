#include <stdio.h>

int main() {
    int n;
    scanf("%d" , &n);
    for(int i=0 ; i<n ; i++){
        int c = 67;
        for(int j=0 ; j<n ; j++){
            printf("%c " , (char)c);
            c++;
        }
        printf("\n");
    }
    return 0;
}