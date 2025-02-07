#include <stdio.h>

int main() {
    int n , min1 , min2;
    scanf("%d" , &n);
    int arr[n];
    int min = 0;
    for(int i=0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i] - arr[i+1] < min){
           int min1 = arr[i]
           int min2 = arr[i+1];
        }
    }
    printf("%d %d" , min1 , min2);

    return 0;
}