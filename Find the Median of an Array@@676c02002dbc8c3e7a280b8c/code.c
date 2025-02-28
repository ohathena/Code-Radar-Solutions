
#include <stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    int sc=0;
    for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
  if(n%2!=0){
    int y = n/2;
    printf("%d" , arr[y]);
  }
  else{
    for(int i=0; i<n ; i++){
        sc+=arr[i];
        
    }
    printf("%d", sc/n);
  }
}