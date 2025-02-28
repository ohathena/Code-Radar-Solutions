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
    if(n==2){
        if(arr[0]!=arr[1]){
             printf("%d" , -1);
        return 0;
        }
        else{
        printf("%d" , arr[1]);
        return 0;
        }
    }
    if(n==3){
        if(arr[0]!=arr[1] || arr[0]!=arr[2]){
               printf("%d" , -1);
               return 0;
        }
    }
    int max=0;
  int a=0;
    for(int i=0 ; i<n-1 ; i++){
          int count = 0;
         for(int j=i+1 ; i<n ; i++){
         if(arr[i]==arr[j]){
            count++;
         }
         if(count>max){
            max = count;
            a = arr[i];
         }
    }
    }
   printf("%d" , a);
    return 0;
}