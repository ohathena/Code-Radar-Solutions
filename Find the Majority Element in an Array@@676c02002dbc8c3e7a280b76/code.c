#include <stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d" , &arr[n]);
    }
    if(n==1){
        printf("%d" , arr[0]);
        return 0;
    }
    if(n==2){
        if(arr[0]!=arr[1]){
             printf("%d" , -1);
        return 0;
        }
        else{
        printf("%d" , arr[0]);
        return 0;
        }
    }
    int count = 0;
    for(int i=0 ; i<n ; i++){
         for(int j=0 ; i<n ; i++){
         
    }
    }

    return 0;
}