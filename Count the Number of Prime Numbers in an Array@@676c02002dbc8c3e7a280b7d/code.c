#include <stdio.h>

int main() {
    int n;
    int c=0;
    scanf("%d" , &n);
    int ar[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &ar[i]);
    }
     for(int i=0; i<n ; i++){
        if(ar[i] == 2 || ar[i] == 3){
            c++;
        }
        else if(ar[i]==0 || ar[i]==1){
            continue;
        }
    //     else{
    //         int t=0;
    //         for(int j=2; j<n ; j++){
    //             if(ar[i]%j==0){
    //                 t++;
    //             }
               
    //         }
    //         if(t==0){
    //             c++;
    //         }
    //     }
     }
     printf("%d" , c);
    
    return 0;
}