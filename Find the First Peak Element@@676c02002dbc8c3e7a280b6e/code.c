#include <stdio.h>

int main() {
    int n , max;
    scanf("%d" , &n);
    int ar[n+1];
    max =0
    for(int i=0 ; i<=n ; i++){
        scanf("%d" , &ar[i]);
    }
    for(int j=0 ; j<=n ; j++){
        if(ar[j] >max){
            max =ar[j];
        }
    }
    printf("%d" , max);

    return 0;
}