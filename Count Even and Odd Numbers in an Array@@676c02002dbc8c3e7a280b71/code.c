#include <stdio.h>

int main() {
    int n;
    int c=0;
    int m=0;
    scanf("%d" , &n);
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int j=0 ; j<n ; j++){
        if(ar[j]%2==0){
            c++;
        }
        else{
            m++;
        }
    }
    printf("%d %d" , c , m);
   
    return 0;
}