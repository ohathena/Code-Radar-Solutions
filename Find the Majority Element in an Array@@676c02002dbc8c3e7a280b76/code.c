#include <stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d" , &arr[n]);
    }
    if(n==1){
        printf("%d" , arr[n]);
        return 0;
    }
    return 0;
}