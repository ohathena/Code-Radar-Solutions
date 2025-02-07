#include <stdio.h>

int main() {
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    int max =0;
    int temp = 0;
    for(int i=0; i<n ; i++){
        if(arr[i] > temp){
            max =temp;
            temp = ar[i];
        }
    }
  printf("%d" , max);
    return 0;
}