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
            temp = arr[i];
        }
        printf("%d %d" , max , temp);
    }
    if(max ==0){
        printf("%d" , -1);
    }
    else{
    printf("%d" , max);
    }
 
    return 0;
}