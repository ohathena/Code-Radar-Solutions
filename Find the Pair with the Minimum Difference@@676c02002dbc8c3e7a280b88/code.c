#include <stdio.h>

int main() {
    int n , min1 , min2;
    scanf("%d" , &n);
    int arr[n];
    
    for(int i=0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    int temp;
int max = arr[0];
    for(int i=0 ; i<n ; i++){
        if(arr[i]>arr[i+1]){
         temp = arr[i];
         arr[i] =  arr[i+1];
         arr[i+1] = temp;
        }
    }

    int min = arr[0];
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i] - arr[i+1] < min){
           int min1 = arr[i];
           int min2 = arr[i+1];
        }
    }
    printf("%d %d" , min1 , min2);

    return 0;
}