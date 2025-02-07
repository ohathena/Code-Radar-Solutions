#include <stdio.h>

int main() {
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    if(n < 2){
        printf("%d" , -1); 
    }
    int max = -1;
    int temp = arr[0];
    for(int i=0; i<n ; i++){
        if(arr[i] > temp){
            max =temp;
            temp = arr[i];
        }
        else if (arr[i] > max && arr[i] != temp) {
            max = arr[i];  
        }
    }

    printf("%d" , max);

    return 0;
}