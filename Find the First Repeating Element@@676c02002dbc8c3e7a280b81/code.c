#include <stdio.h>


int main() {
    int n;
    int c=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , arr[i]);
    }
    for(int i=1; i<n ; i++){
        if( arr[i]==arr[i-1]){
            printf("%d" , arr[i]);
            c=1;
            return 0;
            
        }
        
    }
       if(c==0){
            return -1;
        }
   
    return 0;
}