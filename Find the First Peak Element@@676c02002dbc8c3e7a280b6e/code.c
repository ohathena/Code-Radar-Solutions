#include <stdio.h>
int main() {
    int n , max;
    scanf("%d" , &n);
    int ar[n+1];

    for(int i=0 ; i<=n ; i++){
        scanf("%d" , &ar[i]);
    }

    for(int j=1 ; j<n ; j++){
        if(ar[j] > ar[j-1] && ar[j] > ar[j+1]){
            printf("%d" , ar[j]);
            break;
        }
        
    }


    return 0;
}