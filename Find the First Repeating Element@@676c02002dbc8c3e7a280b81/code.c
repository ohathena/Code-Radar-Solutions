#include <stdio.h>


int main() {
    int n;
    int c=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i=0; i<n-1 ; i++){
        for(int j=i+1; j<n ; i++){
             if( arr[i]==arr[j]){
                 printf("%d" , arr[i]);
                 c+=1;
               return 0;
             }
        }
       
        
    }
       if(c!=0){
            printf("-1");
        }
   
    return 0;
}