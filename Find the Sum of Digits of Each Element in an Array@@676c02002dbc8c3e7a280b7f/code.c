#include <stdio.h>

int main() {
     int n;
     scanf("%d" , &n);
     int arr[n];
     int temp[n];
     for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
     }
     for(int i=0; i<n ; i++){
        int sum = 0;
       int num = arr[i];
       while(num>0){
        int y = num%10;
        sum+=y;
        num/=10;
       }
       temp[i]= sum;
       
     }
    // printf("%d" , (int)sum);

    return 0;
}