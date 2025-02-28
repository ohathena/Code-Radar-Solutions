// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    int sc;
    for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
  if(n%2!=0){
    printf("%d" , arr[n/2]);
  }
  else{
    for(int i=0; i<n ; i++){
        sc+=arr[i];
        printf("%d", sc/n);
    }
  }
}