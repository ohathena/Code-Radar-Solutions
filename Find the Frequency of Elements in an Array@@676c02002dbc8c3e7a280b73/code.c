#include <stdio.h>
int main() {
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
 
    int temp;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }  
   }
    for(int i=0; i<n ; i++){
        printf("%d " , arr[i]);
    }
   
//    int y=0;
//    for(int i=0; i<n-1 ; i++){
    
//         if(arr[i]==arr[i+1]){
//            y++;
//         }
//         else{
//             printf("%d %d \n" , arr[i] , y);
//              y=0;
//         }
//     }

   
    return 0;
}